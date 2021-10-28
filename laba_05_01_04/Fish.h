#pragma once
#include <string>
#include "Animal.h"
class Fish :
    public Animal
{
private:
	std::string type_of_food;

public:
	std::string get_data() override;
};

