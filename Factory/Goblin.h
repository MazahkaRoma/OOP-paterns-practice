#pragma once
#include "EnemyAbstract.h"

class Goblin : Enemy
{
public:
	Goblin(std::string Name);
	void Speak() override;
	void Move() override;
	float Fight() override;
	float GetHealth() override;
	void ReduceHealth(float value) override;
	std::string GetName() override;
	std::string GetType() override;
};
