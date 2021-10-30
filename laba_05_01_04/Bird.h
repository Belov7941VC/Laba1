#pragma once
#include <string>
#include "Animal.h"
class Bird :
	public Animal
{
private:
	std::string type_of_food, habitat;

public:
	Bird(std::string breed, std::string color, std::string type_of_food, std::string habitat);
	~Bird();
	std::string get_data() override;
	std::string get_to_print() override;
};

