#pragma once
class Enemy
{
public:
	//	コンストラクタ
	Enemy();
	//	デストラクタ	
	~Enemy();
private:

	int hp_;
	const char* name_;

public:
	//	ダメージ関数
	void Damage(int damage);

	//	ゲッター
	const int& getHp() const;
};

