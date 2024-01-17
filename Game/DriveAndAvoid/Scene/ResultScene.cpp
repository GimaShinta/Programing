#include "ResultScene.h"
#include "../Object/RankingData.h"
#include "../Utility/InputControl.h"
#include "DxLib.h"

ResultScene::ResultScene() :back_ground(NULL), score(0)
{
	for (int i = 0; i < 3; i++)
	{
		enemy_image[i] = NULL;
		enemy_count[i] = NULL;
	}
}

ResultScene::~ResultScene()
{

}

//‰Šú‰»ˆ—
void ResultScene::Initialize()
{
	//‰æ‘œ‚Ì“Ç‚Ýž‚Ý
	back_ground=LoadGrap
}