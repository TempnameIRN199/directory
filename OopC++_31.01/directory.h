#pragma once
#include "Header.h"

// Создать класс СПРАВОЧНИК со следующими полями :
// 1. Название фирмы;
// 2. Владелец;
// 3. Телефон;
// 4. Адрес;
// 5. Род деятельности.
// Реализовать следующие возможности :
// 1. Поиск по названию;
// 2. Поиск по владельцу;
// 3. Поиск по номеру телефона;
// 4. Поиск по роду деятельности;
// 5. Показ всех записей и добавление.
// Вся информация, должна сохранятся в файле, должна быть реализована возможность добавления новых данных.

class Directory
{
private:
	string name;
	string owner;
	string phone;
	string address;
	string activity;
public:
	Directory(string name, string owner, string phone, string address, string activity);
	~Directory();
	void setName(string name);
	void setOwner(string owner);
	void setPhone(string phone);
	void setAddress(string address);
	void setActivity(string activity);
	string getName();
	string getOwner();
	string getPhone();
	string getAddress();
	string getActivity();
	void showMenu();
	// создать файл для записи
	void createFile();
	// вывод всех данных из файла
	void showAll();
	// запись данных в файл
	void writeToFile();
	// чтение данных из файла
	void readFromFile();
	// Поиск по названию
	void searchName();
	// Поиск по владельцу
	void searchOwner();
	// Поиск по номеру телефона
	void searchPhone();
	// Поиск по роду деятельности
	void searchActivity();
};
