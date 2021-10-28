#pragma once
#include <string>
#include "Animal.h"
class Cat :
    public Animal
{
private:
	std::string FIO, name;

public:
	std::string get_data() override;
};

