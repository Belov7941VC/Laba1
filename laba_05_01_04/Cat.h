#pragma once
#include <string>
#include "Animal.h"
class Cat :
	public Animal
{
private:
	std::string FIO, name;

public:
	Cat(std::string breed, std::string color, std::string FIO, std::string name);
	~Cat();
	std::string get_data() override;
	std::string get_to_print() override;
};

