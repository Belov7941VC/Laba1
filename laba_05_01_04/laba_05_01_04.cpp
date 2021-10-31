#include <iostream>
#include <string>
#include <Windows.h>
#include "List.h"
#include "Keeper.h"
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Cat.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Keeper kipper;
	int c;

	while (true)
	{
		cout << "\nМеню"
			<< "\n1.Восстановление из файла"
			<< "\n2.Добавить животное"
			<< "\n3.Вывод данных на экран"
			<< "\n4.Удалить животное"
			<< "\n5.Сохранение в файл"
			<< "\n0.Выход без сохранения\n->";
		cin >> c;

		switch (c)
		{
		case 1: {
			if (kipper.load("save.txt"))
				cout << "\tДанные успешно загружены\n";
			else
				cout << "\tФайл не найден или повреждён\n";
			break; }
		case 2: {
			int type;
			std::string breed, color, temp1, temp2;
			cout << "\tВыбирите животное:\n"
				<< "\n\t1.Рыба"
				<< "\n\t2.Птица"
				<< "\n\t3.Кошка\n\t->";
			cin >> type;
			switch (type)
			{
			case 1: {
				cout << "\tВведите породу: ";
				getline(cin, breed);
				getline(cin, breed);
				cout << "\tВведите окрас: ";
				getline(cin, color);
				cout << "\tВведите тип питания: ";
				getline(cin, temp1);
				kipper.add(new Fish(breed, color, temp1));
				cout << "\tЖивотное №" << kipper.size() << " успешно добавлено\n";
				break; }
			case 2: {
				cout << "\tВведите породу: ";
				getline(cin, breed);
				getline(cin, breed);
				cout << "\tВведите окрас: ";
				getline(cin, color);
				cout << "\tВведите тип питания: ";
				getline(cin, temp1);
				cout << "\tВведите где обитает: ";
				getline(cin, temp2);
				kipper.add(new Bird(breed, color, temp1, temp2));
				cout << "\tЖивотное №" << kipper.size() << " успешно добавлено\n";
				break; }
			case 3: {
				cout << "\tВведите породу: ";
				getline(cin, breed);
				getline(cin, breed);
				cout << "\tВведите окрас: ";
				getline(cin, color);
				cout << "\tВведите ФИО владельца: ";
				getline(cin, temp1);
				cout << "\tВведите кличку: ";
				getline(cin, temp2);
				kipper.add(new Cat(breed, color, temp1, temp2));
				cout << "\tЖивотное №" << kipper.size() << " успешно добавлено\n";
				break; }
			default: cout << "\tВыбрано недопустимое значение!\n";
			}
			break; }
		case 3: {
			if (kipper.size() == 0)
				cout << "\tЖивотное отсутствует.\n";
			else
				kipper.print();
			break; }
		case 4: {
			if (kipper.size() == 0)
				cout << "\tЖивотное отсутствует.\n";
			else
			{
				size_t num;
				cout << "\tВыбирите Животное. Доступны: №"
					<< (kipper.size() == 1 ? "" : "1 - №")
					<< (kipper.size() == 1 ? 1 : kipper.size())
					<< "\n\t->";
				cin >> num;
				try
				{
					kipper.del(num - 1);
					cout << "\tДанные успешно удалены\n";
				}
				catch (int)
				{
					cout << "\tВыбрано недопустимое значение!\n";
				}
			}
			break; }
		case 5: {
			if (kipper.save("save.txt"))
				cout << "\tДанные успешно сохранены\n";
			else
				cout << "\tПри сохранении произошла ошибка\n";
			break; }
		case 0: {
			cout << "\t\t  Все несохраненные данные будут утеряны!"
				<< "\n\t\t  Продолжить?(1-Да / 0-Нет)\n\t\t->";
			cin >> c;
			if (c == 1) return 0; }
		}
	}
}

/*
Разработать класс Keeper, который реализует контейнер для хранения и обработки
объектов. Класс Keeper должен обеспечивать следующие функции:
	▪ добавление  и  удаление  производных  объектов  абстрактного  класса  Base;
	▪ полное сохранение себя в файле;
	▪ полное восстановление себя из файла.

Класс Животное хранит данные о Рыба, Птица и Кошка. Fish, Bird and Cat
Для Рыба:   порода, окрас,  тип питания.
Для Птица:  порода, окрас,  тип питания,    где обитает.
Для Кошка:  порода, окрас,  ФИО владельца,  кличка.
*/