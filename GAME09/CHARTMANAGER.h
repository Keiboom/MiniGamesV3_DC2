#pragma once
#include "GAME_OBJECT.h"
//#include "NOTE.h"
//#include "RHYTHM_GAME_CONTROLLER.h"
#include "../../libOne/inc/VECTOR2.h"
#include <vector>
#include <string>

namespace GAME09 {
    class CHARTMANAGER :
        public GAME_OBJECT
    {
    public:
        enum INFONAME {
            TITLE,
            ARTIST,
            CREDIT,
            MUSIC,
            BANNER,
            BACKGROUND,
            OFFSET,
            BASEBPM,
            MEASURE,
            VOLUME,
            LANES,
            NOTES,
            NUM_INFOS
        };
        enum COMMANDNAME {
            BPMCHANGE,
            MEASURECHANGE,
            LANECHANGE,
            NUM_COMMANDS
        };
        enum SCORE_DATAS {
            SCORE,
            ACHIEVEMENT,
            NUM_SCORE_DATAS
        };
        struct DATA {
            std::string infoStartStr[NUM_INFOS];
            std::string commandStr[NUM_COMMANDS];
            std::string scoreDataStr[NUM_SCORE_DATAS];
            std::string chartPath;
            int tempImage;
        };
    private:
        DATA ChartMNG;
        float AudioOffset = 0;  //プラスにすると曲より早く流れる
        float VisualOffset = 0; //プラスにすると手前、マイナスにすると奥に動く
        int Score = 0;
        int Achievement = -1;

        int AllNotesNum = 0;
    public:
        CHARTMANAGER(class GAME* game);
        ~CHARTMANAGER();
        void create();
        void init();

        int cntSongs();
        int cntRows(struct SONGINFO& songInfo);
        void loadCharts(int& curLoad);
        void loadChartInfo(std::string fileName, struct SONGINFO& songInfo);
        void loadHiscore(std::string fileName);
        void loadChartImage(std::string chartPath, std::string fileName, int& idx, VECTOR2& size);
        void loadChart(struct SONGINFO& songInfo, int& curRow);
        void updateHighScore(int highScore, int achievement);
        int allNotesNum() { return AllNotesNum; }

        float* audioOffsetPtr() { return &AudioOffset; }
        float* visualOffsetPtr() { return &VisualOffset; }
    };
}