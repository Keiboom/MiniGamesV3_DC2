#pragma once
#include "WEAPONS.h"
class MISSILE :public WEAPONS
{
public:
	struct DATA {
		VECTOR2 Pos;
		int GunsImg = 0;
		int speed = 0;
		int bulletNum = 0;
		int damage = 0;
		int ctIntervalTime = 0;//タイムの設定
		int intervalTime = 0;
		int Level = 0;
	};
private:
	DATA Missile;
public:
	MISSILE(class GAME10_GAME* game);
	~MISSILE();
	void create();
	void init();
	void proc();
	void launch(VECTOR2 pos, int lane);
	void draw();
	int damage() { return Missile.damage; }
};

