#pragma once
#include "Header.h"

class Directory
{
private:
	string name;
	string owner;
	string phone;
	string address;
	string activity;
public:
	Directory();
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
	// добавление записи ранее созданного файла
	void addRecord();
};
