#pragma once
#include <string>

class IEnemy
{
public:
	virtual void Speak() = 0;
	virtual void Move() = 0;
	virtual void Fight() = 0;
	virtual float GetHealth() = 0;
	virtual float ReduceHelth() = 0;
	virtual std::string GetName() = 0;
};