#include "Marine.h"

Marine::Marine()
{
	maxHealth = 50;
	health = 50;
}


Marine::~Marine()
{
}

int Marine::attack()
{
	return 10;
}

void Marine::takeDamage(int damage)
{
	health = health - damage;
	if (health < 0)
		health = 0;
}

bool Marine::isAlive()
{
	if (health > 0)
		return true;
	else
		return false;
}
