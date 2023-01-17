#include "SceneManager.h"
#include <stdio.h>

SceneManager::SceneManager()
{

}

SceneManager::~SceneManager()
{

}

SceneManager* SceneManager::GetInstance()
{
	static SceneManager instance;

	return &instance;
}

void SceneManager::ChangeScene(int sceneNo)
{
	if (sceneNo == 0)
	{
		printf("Titleシーン\n");
	}

	if (sceneNo == 1)
	{
		printf("NewGameシーン\n");
	}

	if (sceneNo == 2)
	{
		printf("GamePlayシーン\n");
	}

	if (sceneNo == 3)
	{
		printf("GameClearシーン\n");
	}
}
