#include "SCENE.h"
namespace GAME09 {
	SCENE::SCENE(class GAME* game) :
		GAME_OBJECT(game) {

	}
	SCENE::~SCENE() {

	}
	void SCENE::create() {

	}
	void SCENE::init() {

	}
	void SCENE::proc() {
		update();
		draw();
		nextScene();
	}
	void SCENE::update() {

	}
	void SCENE::draw() {

	}
	void SCENE::nextScene() {

	}
}