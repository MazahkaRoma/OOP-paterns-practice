#pragma once
#include "FactoryClasses.h"
#include <vector>

class Factory
{
public:
	Factory() = default;

	std::vector<I*> CreateObjects();

};