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
		printf("Title�V�[��\n");
	}

	if (sceneNo == 1)
	{
		printf("NewGame�V�[��\n");
	}

	if (sceneNo == 2)
	{
		printf("GamePlay�V�[��\n");
	}

	if (sceneNo == 3)
	{
		printf("GameClear�V�[��\n");
	}
}
