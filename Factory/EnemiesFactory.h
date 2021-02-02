#pragma once

#include <vector>
#include "Dragon.h"
#include "Goblin.h"

class EnemyFactory
{
public:
	enum class Dificulty
	{
		EASY,
		MIDL,
		HARD
	};
	EnemyFactory() = default;
	std::vector<Enemy*> CreateEnemies(Dificulty dificulty);
private:
	Enemy* CreateEnemy(EnemyTypes enemyType);

};