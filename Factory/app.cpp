// Factory.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Factory.h"
#include "FactoryClasses.h"
#include <vector>

int main()
{
    Factory f = Factory();
    std::vector<I*> returnV = f.CreateObjects();
    for (size_t i = 0; i < returnV.size(); i++)
    {
        returnV[i]->Test();
        delete returnV[i];
    }
    system("pause");
}


