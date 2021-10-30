#include "Bird.h"

Bird::Bird(std::string breed, std::string color, std::string type_of_food, std::string habitat) :
	Animal(breed, color), type_of_food(type_of_food), habitat(habitat) {
	std::cout << "Bird\n";
}

Bird::~Bird()
{
	std::cout << "~Bird\n";
}

std::string Bird::get_data()
{
	return "Bird\n" +
		breed + "\n" +
		color + "\n" +
		type_of_food + "\n" +
		habitat + "\n";
}

std::string Bird::get_to_print()
{
	return "�����: \n\t������: " + breed +
		"\n\t�����: " + color +
		"\n\t���: " + type_of_food +
		"\n\t����� ��������: " + habitat + "\n";
}
