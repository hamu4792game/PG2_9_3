#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy() {
	hp_ = 10;
	name_ = "Lurantis";
}


Enemy::~Enemy() {
	printf("%s‚Í“|‚ê‚½", name_);
}

void Enemy::Damage(int damage) {
	hp_ -= damage;
}

const int& Enemy::getHp() const {
	return hp_;
}