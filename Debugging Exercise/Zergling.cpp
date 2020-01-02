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

//void Zergling::erase(int entitySize, Zergling *entityArr)
//{
//	Zergling* newSquad = new Zergling[entitySize - 1];
//
//	for (int i = 1; i < entitySize; i++)
//	{
//		newSquad[i] = entityArr[i];
//	}
//	delete entityArr;
//
//	Zergling* entityArr = new Zergling[entitySize - 1];
//
//	for (int i = 1; i < entitySize; i++)
//	{
//		entityArr[i] = newSquad[i];
//	}
//
//	delete newSquad;
//}


Zergling* Zergling::erase(int entitySize, Zergling *entityArr)
{
	Zergling* newSquad = new Zergling[entitySize - 1];

	for (int i = 1; i < entitySize; i++)
	{
		newSquad[i] = entityArr[i];
	}
	delete &entityArr;
	return newSquad;
}


