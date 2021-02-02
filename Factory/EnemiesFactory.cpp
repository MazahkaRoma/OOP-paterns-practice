#include "EnemiesFactory.h"

std::vector<Enemy*> EnemyFactory::CreateEnemies(Dificulty dificulty)
{
	std::vector<Enemy*> returnEnemies;
	switch (dificulty)
	{
	case Dificulty::EASY:
		for (size_t i = 0; i < 10;i++)
		{
			if (i < 3)
			{
				returnEnemies.push_back(CreateEnemy(EnemyTypes::Dragon));
			}
			else
			{
				returnEnemies.push_back(CreateEnemy(EnemyTypes::Goblin));
			}
		}
		break;
	case Dificulty::MIDL:
		for (size_t i = 0; i < 10;i++)
		{
			if (i < 5)
			{
				returnEnemies.push_back(CreateEnemy(EnemyTypes::Dragon));
			}
			else
			{
				returnEnemies.push_back(CreateEnemy(EnemyTypes::Goblin));
			}
		}
		break;
	case Dificulty::HARD:
		for (size_t i = 0; i < 10;i++)
		{
			if (i < 8)
			{
				returnEnemies.push_back(CreateEnemy(EnemyTypes::Dragon));
			}
			else
			{
				returnEnemies.push_back(CreateEnemy(EnemyTypes::Goblin));
			}
		}
		break;
	default:
		break;
	}
	
	return returnEnemies;

}

Enemy* EnemyFactory::CreateEnemy(EnemyTypes enemyType)
{
	if (enemyType == EnemyTypes::Dragon)
	{
		Dragon* temp = new Dragon("Anduin");
		return temp;
	}
	else if (enemyType == EnemyTypes::Goblin)
	{
		Goblin* temp = new Goblin("Stix");
		return temp;
	}
}
