#include <stdio.h>
#include "Enemy.h"

int main() {

	//	�C���X�^���X��
	Enemy* enemy;
	enemy = new Enemy;

	//	�_���[�W�p�ϐ�
	int damage = 1;

	while (enemy->getHp() > 0)
	{
		//	�_���[�W�֐�
		enemy->Damage(damage);
	}
	
	delete enemy;

	return 0;
}
