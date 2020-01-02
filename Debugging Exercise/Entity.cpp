#include "Entity.h"



Entity::Entity()
{
}


Entity::~Entity()
{
}

bool Entity::isAlive()
{
	return true;
}

int Entity::attack()
{
	return 10;
}

void Entity::takeDamage(int damage)
{
}

Entity Entity::erase(int entitySize, Entity *entityArr)
{
	return *entityArr;
}

//void Entity::erase(int entitySize, Entity *entityArr)
//{
//}

