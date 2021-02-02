// Factory.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "EnemyAbstract.h"
#include "EnemiesFactory.h"
#include <vector>

int main()
{
    EnemyFactory* factory = new EnemyFactory();
    std::vector<Enemy*> Enemies = factory->CreateEnemies(EnemyFactory::Dificulty::MIDL);
    for (size_t i = 0; i < 10; i++)
    {
        std::cout<<Enemies[i]->GetType()<<std::endl;
    }
    
    system("pause");
}


