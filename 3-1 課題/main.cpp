#include "SceneManager.h"
#include <stdio.h>
#include <Windows.h>

int main()
{
	int sceneNo = 0;

	SceneManager* testSingleton = SceneManager::GetInstance();

	for (int i = 0; i <=7; i++)
	{
		testSingleton->ChangeScene(sceneNo);
		Sleep(1000);
		sceneNo++;

		if (sceneNo > 3)
		{
			sceneNo = 0;
		}
	}

	return  0;
}