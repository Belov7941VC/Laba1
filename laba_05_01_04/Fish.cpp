#include "Fish.h"

Fish::Fish(std::string breed, std::string color, std::string type_of_food) :
	Animal(breed, color), type_of_food(type_of_food) {
	std::cout << "Fish\n";
}

Fish::~Fish()
{
	std::cout << "~Fish\n";
}

std::string Fish::get_data()
{
	return "Fish\n" +
		breed + "\n" +
		color + "\n" +
		type_of_food + "\n";
}

std::string Fish::get_to_print()
{
	return "����: \n\t������: " + breed +
		"\n\t�����: " + color +
		"\n\t��� �������: " + type_of_food + "\n";
}