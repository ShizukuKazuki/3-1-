#pragma once

class SceneManager final
{
private:
	//�R���g���X�^��private�ɂ���
	SceneManager();
	//�f�X�g���N�^��private�ɂ���
	~SceneManager();
public:
	//�R�s�[�R���X�g���N�^�𖳌�
	SceneManager(const SceneManager& obj) = delete;
	//������Z�q�𖳌�
	SceneManager& operator=(const SceneManager& obj) = delete;

	static SceneManager* GetInstance();
	void ChangeScene(int sceneNo);
};