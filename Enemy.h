#pragma once
class Enemy
{
public:
	//	�R���X�g���N�^
	Enemy();
	//	�f�X�g���N�^	
	~Enemy();
private:

	int hp_;
	const char* name_;

public:
	//	�_���[�W�֐�
	void Damage(int damage);

	//	�Q�b�^�[
	const int& getHp() const;
};

