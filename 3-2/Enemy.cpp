#include "Enemy.h"
#include "DxLib.h"
//#include <stdio.h>
#include <iostream>

using namespace std;

//敵の数の初期値０
int  CEnemy::E_No = 0;

//コンストラクタ
CEnemy::CEnemy() :ID_E(0)
{

	ID_E = E_No; 
	E_No++;
}
//デストラクタ
CEnemy::CEnemy()
{
	//DrawBox(ID_E, ID_E, ID_E, +50, GetColor(255, 0, 255), true);
	E_No--;
}


