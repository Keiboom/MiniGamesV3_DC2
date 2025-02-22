#include "CONTAINER.h"
#include "../../libOne/inc/COLOR.h"
#include "../../libOne/inc/graphic.h"
#include "../../libOne/inc/sound.h"
namespace GAME09
{
	void CONTAINER::load() {
		setData();
		loadGraphic();
		loadSounds();
	}
	void CONTAINER::setData() {

		Data.select.jacketTf.pos = VECTOR2(1340, 380);
		Data.select.jacketTf.size = 0.93f;

		Data.fade.alpha = 0;
		Data.fade.color = COLOR(0, 0, 0);
		Data.fade.speed = 700;

		Data.chartMNG.infoStartStr[CHARTMANAGER::TITLE] = "#TITLE";
		Data.chartMNG.infoStartStr[CHARTMANAGER::ARTIST] = "#ARTIST";
		Data.chartMNG.infoStartStr[CHARTMANAGER::CREDIT] = "#CREDIT";
		Data.chartMNG.infoStartStr[CHARTMANAGER::MUSIC] = "#MUSIC";
		Data.chartMNG.infoStartStr[CHARTMANAGER::BANNER] = "#BANNER";
		Data.chartMNG.infoStartStr[CHARTMANAGER::BACKGROUND] = "#BACKGROUND";
		Data.chartMNG.infoStartStr[CHARTMANAGER::OFFSET] = "#OFFSET";
		Data.chartMNG.infoStartStr[CHARTMANAGER::BASEBPM] = "#BASEBPM";
		Data.chartMNG.infoStartStr[CHARTMANAGER::MEASURE] = "#MEASURE";
		Data.chartMNG.infoStartStr[CHARTMANAGER::VOLUME] = "#VOLUME";
		Data.chartMNG.infoStartStr[CHARTMANAGER::LANES] = "#LANES";
		Data.chartMNG.infoStartStr[CHARTMANAGER::NOTES] = "#NOTES";
		Data.chartMNG.commandStr[CHARTMANAGER::BPMCHANGE] = "#BPMCHANGE";
		Data.chartMNG.commandStr[CHARTMANAGER::MEASURECHANGE] = "#MEASURECHANGE";
		Data.chartMNG.commandStr[CHARTMANAGER::LANECHANGE] = "#LANECHANGE";
		Data.chartMNG.scoreDataStr[CHARTMANAGER::SCORE] = "#SCORE";
		Data.chartMNG.scoreDataStr[CHARTMANAGER::ACHIEVEMENT] = "#ACHIEVEMENT";
		Data.chartMNG.chartPath = "..\\main\\assets\\game09\\charts";

		Data.banner.centerPos = VECTOR2(450, height / 2 - 30);
		Data.banner.nextPosOfst = VECTOR2(45, 150);
		Data.banner.imgSize = 2.0f;
		Data.banner.titlePosOfst = VECTOR2(-210, 5);
		Data.banner.artistPosOfst = VECTOR2(-210, 60);
		Data.banner.titleStrSize = VECTOR2(680, 50);
		Data.banner.artistStrSize = VECTOR2(700, 35);
		Data.banner.moveAnimeTime = 0.3f;

		Data.jacket.areaSize = VECTOR2(700, 700);

		Data.back.area = VECTOR2(width, height);

		Data.note.imgSize = 0.13f;
		Data.note.edgeOfst = 10;
		Data.note.rectOfst = 14;
		Data.note.rectHeight = 30;
		Data.note.highlightHeightRatio = 0.15f;
		Data.note.color = COLOR(255, 0, 255);
		Data.note.highlightColorRatio = 0.7f;
		Data.note.downColorRatio = 0.9f;

		Data.rgCont.rawSpeed = 10000;
		Data.rgCont.detailViewTime = 3;
		Data.rgCont.detailViewDisappearTime = 0.5f;
		Data.rgCont.BeforePlayTime = 2;

		Data.lane.laneWidth = 700;
		Data.lane.pos = VECTOR2(width / 2, 900);
		Data.lane.maxLaneNum = 6;

		Data.loadSongs.msgSize = 70;
		Data.loadSongs.barPos = VECTOR2(width / 2, 1000);
		Data.loadSongs.barSize = VECTOR2(width * 0.9f, 70);
		Data.loadSongs.msgPos = VECTOR2(100, 960);
		Data.loadSongs.percentPos = VECTOR2(1820 - Data.loadSongs.msgSize * 2.5f, 960);

		Data.loadChart.msgSize = 70;
		Data.loadChart.barPos = VECTOR2(width / 2, 1000);
		Data.loadChart.barSize = VECTOR2(width * 0.9f, 70);
		Data.loadChart.msgPos = VECTOR2(100, 960);
		Data.loadChart.percentPos = VECTOR2(1820 - Data.loadSongs.msgSize * 2.5f, 960);

		Data.longBelt.color = COLOR(0, 203, 255);

		Data.judge.judge[JUDGEMANAGER::PERFECT].time = 0.05;       //±3フレーム
		Data.judge.judge[JUDGEMANAGER::GREAT].time = 0.08333333; //±5フレーム
		Data.judge.judge[JUDGEMANAGER::MISS].time = 0.11666666; //＋7フレーム
		Data.judge.appearAnimeTime = 0.07f;
		Data.judge.activeTime = 2.0f;
		Data.judge.pos = VECTOR2(width / 2, 750);
		Data.judge.imgSize = 0.25f;
		Data.judge.imgSizeMin = 0.15f;
		Data.judge.accOfst = VECTOR2(0, -40);
		Data.judge.accImgSizeRate = 0.8f;
		Data.judge.comboPos = VECTOR2(1370, 650);
		Data.judge.comboSizeMinRate = 0.8f;

		Data.option.optionImgPos = VECTOR2(0, 0);
		Data.option.optionImgSize = 0.4f;
		Data.option.optionUnderBar = 160;
		Data.option.kindButtonTF.pos = VECTOR2(130, 230);
		Data.option.kindButtonTF.ofst = VECTOR2(0, 120);
		Data.option.kindButtonTF.size = VECTOR2(225, 100);
		Data.option.kindBarX = 260;
		Data.option.typeButtonTF.pos = VECTOR2(440, 650);
		Data.option.typeButtonTF.ofst = VECTOR2(0, 120);
		Data.option.typeButtonTF.size = VECTOR2(225, 100);
		Data.option.keyButtonTF.pos = VECTOR2(1150, 100);
		Data.option.keyButtonTF.ofst = VECTOR2(176, 176);
		Data.option.keyButtonTF.size = VECTOR2(150, 150);
		Data.option.keyButtonImgSize = 0.225f;
		Data.option.optionButtonSize = 0.155f;
		Data.option.colorTypeButtonTF.pos = VECTOR2(440, 770);
		Data.option.colorTypeButtonTF.ofst = VECTOR2(0, 120);
		Data.option.colorTypeButtonTF.size = VECTOR2(225, 100);
		Data.option.colorType1ButtonTF.pos = VECTOR2(1810, 100);
		Data.option.colorType1ButtonTF.ofst = VECTOR2(0, 176);
		Data.option.colorType1ButtonTF.size = VECTOR2(150, 150);
		Data.option.colorType2ButtonTF.pos = VECTOR2(1810, 300);
		Data.option.colorType2ButtonTF.ofst = VECTOR2(0, 300);
		Data.option.colorType2ButtonTF.size = VECTOR2(150, 150);

		Data.optionButton.imgSize = 0.44f;
		Data.optionButton.colliType = BUTTON::DIAMOND;
		Data.optionButton.key = KEY_O;
		Data.optionButton.pos = VECTOR2(1810, 110);
		Data.optionButton.radius = 80;

		Data.backButton.imgSize = 0.32f;
		Data.backButton.colliType = BUTTON::DIAMOND;
		Data.backButton.key = KEY_ESCAPE;
		Data.backButton.pos = VECTOR2(80, 80);
		Data.backButton.radius = 60;

		Data.loadOption.fileName = "..\\main\\assets\\game09\\saves\\Config.txt";
		Data.loadOption.optionStr[LOADOPTION::SPEED] = "#SPEED";
		Data.loadOption.optionStr[LOADOPTION::SOUND_EFFECT] = "#SOUND_EFFECT";
		Data.loadOption.optionStr[LOADOPTION::AUDIO_OFFSET] = "#AUDIO_OFFSET";
		Data.loadOption.optionStr[LOADOPTION::VISUAL_OFFSET] = "#VISUAL_OFFSET";
		Data.loadOption.optionStr[LOADOPTION::KEY_BIND_TYPE] = "#KEY_BIND_TYPE";
		Data.loadOption.optionStr[LOADOPTION::KEY_CONFIG] = "#KEY_CONFIG";
		Data.loadOption.optionStr[LOADOPTION::COLOR_TYPE] = "#COLOR_TYPE";
		Data.loadOption.optionStr[LOADOPTION::COLOR_1_CONFIG] = "#COLOR_1_CONFIG";
		Data.loadOption.optionStr[LOADOPTION::COLOR_2_CONFIG] = "#COLOR_2_CONFIG";
		Data.loadOption.optionStr[LOADOPTION::COLOR_DIFFERENT_CONFIG] = "#COLOR_DIFFERENT_CONFIG";
		Data.loadOption.optionStr[LOADOPTION::COLOR_CUSTOM_CONFIG] = "#COLOR_CUSTOM_CONFIG";
		Data.loadOption.optionStr[LOADOPTION::COLOR_FADING_RATIO] = "#COLOR_FADING_RATIO";

		Data.colorPicker.areaSize = VECTOR2(300, 300);
		Data.colorPicker.size = 130;
		Data.colorPicker.swRate = 0.02f;
		Data.colorPicker.innerSize = 0.7f;
		Data.colorPicker.rectSize = 0.45f;
		Data.colorPicker.hPointerSize = 0.15f;
		Data.colorPicker.svPointerSize = 0.1f;

		Data.detail.jacketPos = VECTOR2(1300, 650);
		Data.detail.jacketSize = 0.8f;
		Data.detail.titleSize = VECTOR2(1500, 150);
		Data.detail.otherSize = VECTOR2(700, 80);
		Data.detail.otherStrSize = 40;
		Data.detail.titlePos = VECTOR2(width / 2, 300);
		Data.detail.artistPos = VECTOR2(600, 500);
		Data.detail.chartPos = VECTOR2(600, 920);
		Data.detail.otherStrOfst = VECTOR2(0, -100);
		Data.detail.backColor = COLOR(0, 0, 0, 180);

		Data.combo.numOfst = VECTOR2(0, -50);
		Data.combo.strOfst = VECTOR2(0, 30);
		Data.combo.numSize = 0.31f;
		Data.combo.strSize = 0.12f;
		Data.combo.digitSpace = 80;

		Data.score.backImgPos = VECTOR2(1618, 990);
		Data.score.backImgSize = 0.65f;
		Data.score.scoreNumPosOfst = VECTOR2(250, 62);
		Data.score.scoreNumSize = VECTOR2(500, 100);
		Data.score.scoreAnimeTime = 0.3f;

		Data.achievement.pos = VECTOR2(550, 200);
		Data.achievement.size = 0.70f;

		Data.gameClear.jacketTF.pos = VECTOR2(1450, 650);
		Data.gameClear.jacketTF.size = 1.0f;
		Data.gameClear.framePos = VECTOR2(550, 540);
		Data.gameClear.frameSize = 1.5f;
		Data.gameClear.judgeImgPos = VECTOR2(280, 620);
		Data.gameClear.judgeImgSize = 0.3f;
		Data.gameClear.judgeNumPos = VECTOR2(600, 652);
		Data.gameClear.judgeNumSize = 65;
		Data.gameClear.judgeNextOfst = VECTOR2(0, 105);
		Data.gameClear.maxComboPos = VECTOR2(810, 760);
		Data.gameClear.maxComboSize = 1.1f;
		Data.gameClear.scorePos = VECTOR2(550, 380);
		Data.gameClear.scoreSize = 1.25f;
		Data.gameClear.highScoreStrPos = VECTOR2(170, 535);
		Data.gameClear.highScoreOfst = VECTOR2(460, 10);
		Data.gameClear.highScoreDiffOfst = VECTOR2(30, 0);
		Data.gameClear.highScoreStrSize = VECTOR2(width, 40);
		Data.gameClear.highScoreSize = VECTOR2(width, 60);
		Data.gameClear.titlePos = VECTOR2(1450, 170);
		Data.gameClear.titleSize = 1.092f;
		Data.gameClear.operationPos = VECTOR2(1542, 1033);
		Data.gameClear.operationSize = 0.6f;
		Data.gameClear.fastSlowPos = VECTOR2(550, 940);
		Data.gameClear.fastSlowSize = 0.6f;
		Data.gameClear.fastSlowGaugeOfst = VECTOR2(-209, -32);
		Data.gameClear.fastSlowGaugeSize = VECTOR2(418, 64);
		Data.gameClear.fastSlowNumSize = VECTOR2(200, 50);
		Data.gameClear.fastNumOfst = VECTOR2(-205, 30);
		Data.gameClear.slowNumOfst = VECTOR2(205, 30);
		Data.gameClear.fastColor = COLOR(117, 149, 255);
		Data.gameClear.slowColor = COLOR(255, 65, 116);

		Data.autoButton.imgSize = 0.44f;
		Data.autoButton.colliType = BUTTON::DIAMOND;
		Data.autoButton.key = KEY_A;
		Data.autoButton.pos = VECTOR2(1810, 320);
		Data.autoButton.radius = 80;
	}
	void CONTAINER::loadGraphic() {
		Data.chartMNG.tempImage = loadImage("..\\main\\assets\\game09\\texture\\temp_image.png");
		Data.jacket.areaBackImg = loadImage("..\\main\\assets\\game09\\texture\\jacket_back.png");
		Data.note.centerUnderImg = loadImage("..\\main\\assets\\game09\\texture\\Note_Center_Under.png");
		Data.note.centerUpperImg = loadImage("..\\main\\assets\\game09\\texture\\Note_Center_Upper.png");
		Data.note.rightUnderImg = loadImage("..\\main\\assets\\game09\\texture\\Note_Right_Under.png");
		Data.note.rightUpperImg = loadImage("..\\main\\assets\\game09\\texture\\Note_Right_Upper.png");
		Data.note.leftUnderImg = loadImage("..\\main\\assets\\game09\\texture\\Note_Left_Under.png");
		Data.note.leftUpperImg = loadImage("..\\main\\assets\\game09\\texture\\Note_Left_Upper.png");
		Data.judge.judge[JUDGEMANAGER::PERFECT].img = loadImage("..\\main\\assets\\game09\\texture\\perfect.png");
		Data.judge.judge[JUDGEMANAGER::GREAT].img = loadImage("..\\main\\assets\\game09\\texture\\great.png");
		Data.judge.judge[JUDGEMANAGER::MISS].img = loadImage("..\\main\\assets\\game09\\texture\\miss.png");
		Data.judge.fastImg = loadImage("..\\main\\assets\\game09\\texture\\fast.png");
		Data.judge.slowImg = loadImage("..\\main\\assets\\game09\\texture\\slow.png");
		Data.option.optionImg = loadImage("..\\main\\assets\\game09\\texture\\Option_Str_img.png");
		Data.option.keyButtonImg = loadImage("..\\main\\assets\\game09\\texture\\Key_Config_Button.png");
		Data.option.optionButtonImgs[0] = loadImage("..\\main\\assets\\game09\\texture\\Option_General.png");
		Data.option.optionButtonImgs[1] = loadImage("..\\main\\assets\\game09\\texture\\Option_Key_Bind.png");
		Data.option.optionButtonImgs[2] = loadImage("..\\main\\assets\\game09\\texture\\Option_Color.png");
		Data.option.optionTypeImgs[0] = loadImage("..\\main\\assets\\game09\\texture\\Option_Type1.png");
		Data.option.optionTypeImgs[1] = loadImage("..\\main\\assets\\game09\\texture\\Option_Type2.png");
		Data.option.optionTypeImgs[2] = loadImage("..\\main\\assets\\game09\\texture\\Option_Type3.png");
		Data.option.optionTypeImgs[3] = loadImage("..\\main\\assets\\game09\\texture\\Option_Custom.png");
		Data.option.keyWait1Img = loadImage("..\\main\\assets\\game09\\texture\\Set_Key_1.png");
		Data.option.keyWait2Img = loadImage("..\\main\\assets\\game09\\texture\\Set_Key_2.png");
		Data.combo.numImg = loadImage("..\\main\\assets\\game09\\texture\\combo_num.png");
		divideImage(Data.combo.numImg, 10, 1, 260, 512, Data.combo.numImgs);
		Data.combo.strImg = loadImage("..\\main\\assets\\game09\\texture\\combo_str.png");
		Data.score.backImg = loadImage("..\\main\\assets\\game09\\texture\\score_back.png");
		Data.achievement.imgs[ACHIEVEMENT::CLEAR] = loadImage("..\\main\\assets\\game09\\texture\\clear.png");
		Data.achievement.imgs[ACHIEVEMENT::FULLCOMBO] = loadImage("..\\main\\assets\\game09\\texture\\fullcombo.png");
		Data.achievement.imgs[ACHIEVEMENT::ALLPERFECT] = loadImage("..\\main\\assets\\game09\\texture\\allperfect.png");
		Data.backButton.img = loadImage("..\\main\\assets\\game09\\texture\\Back_Button.png");
		Data.autoButtonImg.imgs[0] = loadImage("..\\main\\assets\\game09\\texture\\Auto_Button_Off.png");
		Data.autoButtonImg.imgs[1] = loadImage("..\\main\\assets\\game09\\texture\\Auto_Button_On.png");
		Data.optionButton.img = loadImage("..\\main\\assets\\game09\\texture\\Option_Button.png");
	}
	void CONTAINER::loadSounds() {
		Data.sound.tapSound = loadSound("..\\main\\assets\\game09\\sounds\\tap2.wav");
	}
}