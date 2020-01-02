#pragma once
class Entity
{
public:
	Entity();
	~Entity();

	virtual int attack();
	virtual void takeDamage(int damage);
	virtual bool isAlive();
	//virtual void erase(int entitySize, Entity *entityArr);
	virtual Entity erase(int entitySize, Entity *entityArr);

protected:
	int health;
	int maxHealth;
};

