#include "Cat.h"

Cat::Cat(std::string breed, std::string color, std::string FIO, std::string name) :
	Animal(breed, color), FIO(FIO), name(name) {
	std::cout << "Cat\n";
}

Cat::~Cat()
{
	std::cout << "~Cat\n";
}

std::string Cat::get_data()
{
	return "Bird\n" +
		breed + "\n" +
		color + "\n" +
		FIO + "\n" +
		name + "\n";
}

std::string Cat::get_to_print()
{
	return "Рыба: \n\tпорода: " + breed +
		"\n\tокрас: " + color +
		"\n\tФИО владельца: " + FIO +
		"\n\tкличка: " + name + "\n";
}
