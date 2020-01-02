#pragma once
#include "Entity.h"

class Marine : Entity
{
public:
	Marine();
	~Marine();

	int attack();
	void takeDamage(int damage);
	bool isAlive();
	Marine erase(int entitySize, Marine *entityArr);
	//void erase(int entitySize, Marine *entityArr);

};

