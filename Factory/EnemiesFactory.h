#pragma once

#include <vector>
#include "Dragon.h"

class EnemyFactory
{
public:
	EnemyFactory() = default;

	std::vector<Enemy> CreateEnemies();

};