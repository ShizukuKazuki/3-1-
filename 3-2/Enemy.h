#pragma once

class CEnemy
{
protected:
public:
	CEnemy();
	~CEnemy();
	//敵出力
	static void Enemy();

	void EnemyS();
	
	//番号
	int ID_E;
	//数
	static int E_No;
};
