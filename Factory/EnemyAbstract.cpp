#include "EnemyAbstract.h"

float Enemy::GetHealth()
{
    return Health;
}

void Enemy::ReduceHealth(float value)
{
    this->Health -= value;
}

std::string Enemy::GetName()
{
    return Name;
}

std::string Enemy::GetType()
{
    return MatchingTypes[Type];
}
