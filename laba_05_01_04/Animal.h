#pragma once
#include <iostream>
#include <string>
class Animal
{
protected:
	std::string breed, color;

public:
	Animal(std::string breed, std::string color);
	virtual ~Animal();
	virtual std::string get_data() = 0;
	virtual std::string get_to_print() = 0;
};

