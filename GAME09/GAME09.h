#pragma once
#include "../MAIN/GAME_BASE.h"
#include "SONGINFO.h"
#include <vector>

namespace GAME09
{
    class GAME :
        public GAME_BASE
    {
    public:
        GAME(class MAIN* main) :GAME_BASE(main) {};
        ~GAME() {};
        int create();
        void proc();
        void destroy();
		//�R���e�i
	private:
		class CONTAINER* Container;
	public:
		class CONTAINER* container() {
			return Container;
		}
	public:
		enum SCENE_ID {
			TITLE_ID,
			SELECT_ID,
			STAGE_ID,
			GAME_CLEAR_ID,
			LOADSONGS_ID,
			NUM_SCENES
		};
	private:
		class SCENE* Scenes[NUM_SCENES];
		SCENE_ID CurSceneId;
		class FADE* Fade;
		class CHARTMANAGER* ChartMNG;
		class BANNER* Banner;

		std::vector<SONGINFO> Songs;
	public:
		void changeScene(SCENE_ID sceneId);
		class SCENE* scene(SCENE_ID sceneId) { return Scenes[sceneId]; }
		class FADE* fade() { return Fade; }
		class CHARTMANAGER* chartMNG() { return ChartMNG; }
		class BANNER* banner() { return Banner; }

		std::vector<SONGINFO>& songs() { return Songs; }
    };
}
