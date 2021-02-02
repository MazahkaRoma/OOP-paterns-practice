#pragma once
#include <string>
#include <map>
#include "EnemyTypes.h"

class Enemy //Abstract class for all enemies
{
public:
	virtual void Speak() = 0; //Pure virtual function for enemy speaking
	virtual void Move() = 0; //Pure virtual function for enemy moving
	virtual void Fight() = 0; //Pure virtual function for enemy fighting
	virtual float GetHealth() = 0; //Pure virtual function to get enemy health
	virtual float ReduceHelth() = 0; //Pure virtual function to reduce enemy health
	virtual std::string GetName() = 0; //Pure enemy function to get enemy Name
	virtual std::string GetType() = 0; //Pure function to get EnemyType
	virtual ~Enemy() = 0; //Pure virtual destructor
private:
	std::map<EnemyTypes, std::string> MatchingTypes = { //Map for enemy types
		{EnemyTypes::ArrmoredKnight,"Armored Knight"}, //Matching EnemyTypes::ArrmoredKnight to "Armored Knight" string
		{EnemyTypes::Dragon,"Dragon"}, //Matching EnemyTypes::Dragon to "Dragon" string
		{EnemyTypes::Goblin,"Goblin"}, //Matching EnemyTypes::Goblin to "Goblin" string
		{EnemyTypes::Thiev,"Thiev"} //Matching EnemyTypes::Thiev to "Thiev" string
	};
	const EnemyTypes Type; //Current Enemy type 
};