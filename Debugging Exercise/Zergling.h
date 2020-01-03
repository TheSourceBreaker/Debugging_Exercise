#pragma once
#include "Entity.h"

class Zergling : Entity
{
public:
	Zergling();
	~Zergling();

	int attack();
	void takeDamage(int damage);
	bool isAlive();
	//Zergling* Zergling::erase(int entitySize, Zergling *entityArr);
	//void Zergling::erase(int entitySize, Zergling *entityArr);

};

