#pragma once
#include "SCENE.h"
#include"../../libOne/inc/COLOR.h"
#include"../../libOne/inc/VECTOR2.h"
namespace GAME06 
{
    class RESULT_C :
        public SCENE
    {
    public:
        struct DATA {
            COLOR backgroundColor;
            float nameSize = 0.0f;
            COLOR nameColor;
            VECTOR2 namePos;
            const char* name = nullptr;
            float guidanceSize = 0.0f;
            COLOR guidanceColor;
            VECTOR2 guidancePos;
            const char* guidance = nullptr;
        };
    private:
        DATA ResultC;
    public:
        RESULT_C(class GAME* game):SCENE(game){}
        ~RESULT_C(){}
        void create();
        void draw();
        void nextScene();
    };
}

