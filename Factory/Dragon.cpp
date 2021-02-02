#include "Dragon.h"

Dragon::Dragon(std::string Name)
{
	this->Name = Name;
	this->Type = EnemyTypes::Dragon;
	this->Strenght = 32.f;
}

void Dragon::Speak()
{
	std::cout << "Dragon says:'RHAAAAAAAAA'" << std::endl;
}

void Dragon::Move()
{
	std::cout << "Dragon moves" << std::endl;
}

float Dragon::Fight()
{
	return this->Strenght;
}

float Dragon::GetHealth()
{
	return this->Health;
}

void Dragon::ReduceHealth(float value)
{
	this->Health -= value;
}

std::string Dragon::GetName()
{
	return Enemy::GetName();
}

std::string Dragon::GetType()
{
	return Enemy::GetType();
}
