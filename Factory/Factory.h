#pragma once

#include <vector>

class Factory
{
public:
	Factory() = default;

	std::vector<int> CreateObjects();

};