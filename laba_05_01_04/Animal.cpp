#include "Animal.h"

Animal::Animal(std::string breed, std::string color) :
	breed(breed), color(color) {
	std::cout << "Animal\n";
}

Animal::~Animal()
{
	std::cout << "Animal\n";
}
