#pragma once
#include <string>
#include <map>
#include "EnemyTypes.h"
#include <iostream>

class Enemy //Abstract class for all enemies
{
public:
	virtual void Speak() = 0; //Pure virtual function for enemy speaking
	virtual void Move() = 0; //Pure virtual function for enemy moving
	virtual float Fight() = 0; //Pure virtual function for enemy fighting
	virtual float GetHealth(); //Pure virtual function to get enemy health
	virtual void ReduceHealth(float value); //Pure virtual function to reduce enemy health
	virtual std::string GetName(); //Pure enemy function to get enemy Name
	virtual std::string GetType(); //Pure function to get EnemyType
	virtual ~Enemy() = 0; //Pure virtual destructor
protected:
	EnemyTypes Type; //Current Enemy type 
	float Health;
	float Strenght;
	std::string Name;
private:
	std::map<EnemyTypes, std::string> MatchingTypes = { //Map for enemy types
		{EnemyTypes::ArrmoredKnight,"Armored Knight"}, //Matching EnemyTypes::ArrmoredKnight to "Armored Knight" string
		{EnemyTypes::Dragon,"Dragon"}, //Matching EnemyTypes::Dragon to "Dragon" string
		{EnemyTypes::Goblin,"Goblin"}, //Matching EnemyTypes::Goblin to "Goblin" string
		{EnemyTypes::Thiev,"Thiev"} //Matching EnemyTypes::Thiev to "Thiev" string
	};
	
};