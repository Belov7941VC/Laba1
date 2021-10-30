#pragma once
#include <string>
#include "Animal.h"
class Fish :
	public Animal
{
private:
	std::string type_of_food;

public:
	Fish(std::string breed, std::string color, std::string type_of_food);
	~Fish();
	std::string get_data() override;
	std::string get_to_print() override;
};

