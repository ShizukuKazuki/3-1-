#include "Enemy.h"
#include "DxLib.h"
//#include <stdio.h>
#include <iostream>

using namespace std;

//�G�̐��̏����l�O
int  CEnemy::E_No = 0;

//�R���X�g���N�^
CEnemy::CEnemy() :ID_E(0)
{

	ID_E = E_No; 
	E_No++;
}
//�f�X�g���N�^
CEnemy::CEnemy()
{
	//DrawBox(ID_E, ID_E, ID_E, +50, GetColor(255, 0, 255), true);
	E_No--;
}


