#include "Keeper.h"

Keeper::Keeper()
{
	std::cout << "Keeper\n";
}

Keeper::~Keeper()
{
	std::cout << "~Keeper\n";
}

void Keeper::print()
{
	for (size_t i = 0; i < animals.size(); i++)
		std::cout << "Животное №" << i + 1 << ": " << animals[i]->get_to_print();
}

void Keeper::add(Animal* new_animal)
{
	animals.push_back(new_animal);
}

void Keeper::del(size_t num)
{
	delete animals.pop(num);
}

bool Keeper::save(string file)
{
	std::ofstream fout(file);
	if (!fout) return false;
	fout << to_string(animals.size()) << std::endl;
	for (size_t i = 0; i < animals.size(); ++i)
		fout << animals[i]->get_data();

	fout.close();
	return true;
}

bool Keeper::load(string file)
{
	std::ifstream fin(file);
	if (!fin) return false;

	std::string type, breed, color, temp1, temp2;
	size_t animal_amount;

	fin >> animal_amount;
	for (size_t i = 0; i < animal_amount; i++)
	{
		fin >> type;
		getline(fin, breed);
		getline(fin, breed);
		getline(fin, color);
		getline(fin, temp1);
		if (type == "Fish")
		{
			animals.push_back(new Fish(breed, color, temp1));
		}
		else if (type == "Bird")
		{
			getline(fin, temp2);
			animals.push_back(new Bird(breed, color, temp1, temp2));
		}
		else if (type == "Cat")
		{
			getline(fin, temp2);
			animals.push_back(new Cat(breed, color, temp1, temp2));
		}
	}
	return true;
}

size_t Keeper::size()
{
	return animals.size();
}
