#include "Goblin.h"

Goblin::Goblin(std::string Name)
{
    this->Strenght = 5.0f;
    this->Health = 30.0f;
    this->Name = Name;
    this->Type = EnemyTypes::Goblin;
    this->Speak();
}

void Goblin::Speak()
{
    std::cout << "Goblin says:'Heeheheh'" << std::endl;
}

void Goblin::Move()
{
    std::cout << "Goblin moves" << std::endl;
}

float Goblin::Fight()
{
    return this->Strenght;
}

float Goblin::GetHealth()
{
    return this->Health;
}

void Goblin::ReduceHealth(float value)
{
    this->Health -= value;
}

std::string Goblin::GetName()
{
    return Enemy::GetName();
}

std::string Goblin::GetType()
{
    return Enemy::GetType();
}
