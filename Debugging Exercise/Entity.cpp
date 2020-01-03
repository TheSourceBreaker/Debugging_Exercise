#include "Entity.h"



Entity::Entity()
{
	maxHealth = 0;
	health = 0;
}


Entity::~Entity()
{
}

bool Entity::isAlive()
{
	if (health > 0)
		return true;
	else
		return false;
}

int Entity::attack()
{
	return 10;
}

void Entity::takeDamage(int damage)
{
	health = health - damage;
	if (health < 0)
		health = 0;
}

Entity Entity::erase(int entitySize, Entity *entityArr)
{
	return *entityArr;
}

//void Entity::erase(int entitySize, Entity *entityArr)
//{
//}

