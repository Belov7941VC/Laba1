#pragma once
#include "List.h"
#include "Animal.h"
#include <fstream>
#include <string>
class Keeper
{
private:
	List<Animal*> garages;

public:
	void print();					// ����� �� ����� ����������� �������� ������������ ������ Base
	void add(Animal* new_animal);	// ����������     ����������� �������� ������������ ������ Base
	void del(size_t num);			// ��������       ����������� �������� ������������ ������ Base
	bool save(std::string file);			// ������ ����������     ���� �  �����
	bool load(std::string file);			// ������ �������������� ���� �� �����
};