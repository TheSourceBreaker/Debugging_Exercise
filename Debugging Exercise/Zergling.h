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
};

