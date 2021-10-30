#pragma once
#include <fstream>
#include <string>
#include "List.h"
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Cat.h"
class Keeper
{
private:
	List<Animal*> animals;

public:
	Keeper();
	~Keeper();
	void print();					// ����� �� ����� ����������� �������� ������������ ������ Base
	void add(Animal* new_animal);	// ����������     ����������� �������� ������������ ������ Base
	void del(size_t num);			// ��������       ����������� �������� ������������ ������ Base
	bool save(std::string file);	// ������ ����������     ���� �  �����
	bool load(std::string file);	// ������ �������������� ���� �� �����
	size_t size();
};