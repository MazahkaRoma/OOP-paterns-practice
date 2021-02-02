#include "Factory.h"

std::vector<I*> Factory::CreateObjects() 
{
    std::vector<I*> returnV;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            A *temp = new A();
            returnV.push_back(temp);
        }
        else if(i%2!=0)
        {
            B *temp = new B();
            returnV.push_back(temp);
        }
    }
    return returnV;
}
