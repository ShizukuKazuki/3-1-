#pragma once

class SceneManager final
{
private:
	//コントラスタをprivateにする
	SceneManager();
	//デストラクタをprivateにする
	~SceneManager();
public:
	//コピーコンストラクタを無効
	SceneManager(const SceneManager& obj) = delete;
	//代入演算子を無効
	SceneManager& operator=(const SceneManager& obj) = delete;

	static SceneManager* GetInstance();
	void ChangeScene(int sceneNo);
};