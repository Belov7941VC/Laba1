#pragma once
#include <string>
class Animal
{
protected:
	std::string breed, color;

public:
	virtual std::string get_data() = 0;
};

