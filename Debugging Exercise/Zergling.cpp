#include "Zergling.h"

Zergling::Zergling()
{
	maxHealth = 25;
	health = 25;
}


Zergling::~Zergling()
{
}

int Zergling::attack()
{
	return 10;
}

void Zergling::takeDamage(int damage)
{
	health = health - damage;
	if (health < 0)
		health = 0;
}

bool Zergling::isAlive()
{
	if (health > 0)
		return true;
	else
		return false;
}

