#pragma once
#include <string>
#include "Animal.h"
class Bird :
    public Animal
{
private:
	std::string type_of_food, habitat;

public:
	std::string get_data() override;
};

