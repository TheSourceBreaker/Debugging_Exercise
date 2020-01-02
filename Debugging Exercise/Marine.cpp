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

//int Marine::erase(int entitySize, Entity entityArr)
//{
//	int* newEntityArr = new int[entitySize - 1];
//
//	for (int i = 0; i < entitySize; i++)
//	{
//		newEntityArr[i] = currentEntityCount[i];
//	}
//	delete currentEntityCount;
//	return newEntityArr;
//}

Marine Marine::erase(int entitySize, Marine *entityArr)
{
	Marine* newSquad = new Marine[entitySize - 1];

	for (int i = 1; i < entitySize; i++)
	{
		newSquad[i] = entityArr[i];
	}
	delete entityArr;
	return *newSquad;
}

//void Marine::erase(int entitySize, Marine *entityArr)
//{
//	Marine* newSquad = new Marine[entitySize - 1];
//
//	for (int i = 1; i < entitySize; i++)
//	{
//		newSquad[i] = entityArr[i];
//	}
//	delete entityArr;
//
//	Marine* entityArr = new Marine[entitySize - 1];
//
//	for (int i = 1; i < entitySize; i++)
//	{
//		entityArr[i] = newSquad[i];
//	}
//
//	delete newSquad;
//}


