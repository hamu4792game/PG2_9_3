#include <stdio.h>
#include "Enemy.h"

int main() {

	//	インスタンス化
	Enemy* enemy;
	enemy = new Enemy;

	//	ダメージ用変数
	int damage = 1;

	while (enemy->getHp() > 0)
	{
		//	ダメージ関数
		enemy->Damage(damage);
	}
	
	delete enemy;

	return 0;
}
