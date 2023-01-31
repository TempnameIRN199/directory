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

#include "directory.h"

Directory::Directory(string name, string owner, string phone, string address, string activity)
{
	this->name = name;
	this->owner = owner;
	this->phone = phone;
	this->address = address;
	this->activity = activity;
}

Directory::~Directory()
{
}

void Directory::setName(string name)
{
	this->name = name;
}

void Directory::setOwner(string owner)
{
	this->owner = owner;
}

void Directory::setPhone(string phone)
{
	this->phone = phone;
}

void Directory::setAddress(string address)
{
	this->address = address;
}

void Directory::setActivity(string activity)
{
	this->activity = activity;
}

string Directory::getName()
{
	return this->name;
}

string Directory::getOwner()
{
	return this->owner;
}

string Directory::getPhone()
{
	return this->phone;
}

string Directory::getAddress()
{
	return this->address;
}

string Directory::getActivity()
{
	return this->activity;
}

void showMenu()
{
	cout << "1. Search by name" << endl;
	cout << "2. Search by owner" << endl;
	cout << "3. Search by phone" << endl;
	cout << "4. Search by activity" << endl;
	cout << "5. Show all records and add" << endl;
	cout << "6. Exit" << endl;
}

void createFile()
{
	ofstream fout;
	fout.open("directory.txt", ios::out);
	fout.close();
}

void showAll()
{
	ifstream fin;
	fin.open("directory.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "File not found" << endl;
		return;
	}
	string name, owner, phone, address, activity;
	while (!fin.eof())
	{
		getline(fin, name);
		getline(fin, owner);
		getline(fin, phone);
		getline(fin, address);
		getline(fin, activity);
		cout << "Name: " << name << endl;
		cout << "Owner: " << owner << endl;
		cout << "Phone: " << phone << endl;
		cout << "Address: " << address << endl;
		cout << "Activity: " << activity << endl;
		cout << endl;
	}
	fin.close();
}

void writetoFile()
{
	ofstream fout;
	fout.open("directory.txt", ios::app);
	if (!fout.is_open())
	{
		cout << "File not found" << endl;
		return;
	}
	string name, owner, phone, address, activity;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter owner: ";
	cin >> owner;
	cout << "Enter phone: ";
	cin >> phone;
	cout << "Enter address: ";
	cin >> address;
	cout << "Enter activity: ";
	cin >> activity;
	fout << name << endl;
	fout << owner << endl;
	fout << phone << endl;
	fout << address << endl;
	fout << activity << endl;
	fout.close();
}

void readFromFile()
{
	ifstream fin;
	fin.open("directory.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "File not found" << endl;
		return;
	}
	string name, owner, phone, address, activity;
	cout << "Enter name: ";
	cin >> name;
	while (!fin.eof())
	{
		getline(fin, name);
		getline(fin, owner);
		getline(fin, phone);
		getline(fin, address);
		getline(fin, activity);
		if (name == name)
		{
			cout << "Name: " << name << endl;
			cout << "Owner: " << owner << endl;
			cout << "Phone: " << phone << endl;
			cout << "Address: " << address << endl;
			cout << "Activity: " << activity << endl;
			cout << endl;
		}
	}
	fin.close();
}

void searchName()
{
	ifstream fin;
	fin.open("directory.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "File not found" << endl;
		return;
	}
	string name, owner, phone, address, activity;
	cout << "Enter name: ";
	cin >> name;
	while (!fin.eof())
	{
		getline(fin, name);
		getline(fin, owner);
		getline(fin, phone);
		getline(fin, address);
		getline(fin, activity);
		if (name == name)
		{
			cout << "Name: " << name << endl;
			cout << "Owner: " << owner << endl;
			cout << "Phone: " << phone << endl;
			cout << "Address: " << address << endl;
			cout << "Activity: " << activity << endl;
			cout << endl;
		}
	}
	fin.close();
}

void searchOwner()
{
	ifstream fin;
	fin.open("directory.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "File not found" << endl;
		return;
	}
	string name, owner, phone, address, activity;
	cout << "Enter owner: ";
	cin >> owner;
	while (!fin.eof())
	{
		getline(fin, name);
		getline(fin, owner);
		getline(fin, phone);
		getline(fin, address);
		getline(fin, activity);
		if (owner == owner)
		{
			cout << "Name: " << name << endl;
			cout << "Owner: " << owner << endl;
			cout << "Phone: " << phone << endl;
			cout << "Address: " << address << endl;
			cout << "Activity: " << activity << endl;
			cout << endl;
		}
	}
	fin.close();
}

void searchPhone()
{
	ifstream fin;
	fin.open("directory.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "File not found" << endl;
		return;
	}
	string name, owner, phone, address, activity;
	cout << "Enter phone: ";
	cin >> phone;
	while (!fin.eof())
	{
		getline(fin, name);
		getline(fin, owner);
		getline(fin, phone);
		getline(fin, address);
		getline(fin, activity);
		if (phone == phone)
		{
			cout << "Name: " << name << endl;
			cout << "Owner: " << owner << endl;
			cout << "Phone: " << phone << endl;
			cout << "Address: " << address << endl;
			cout << "Activity: " << activity << endl;
			cout << endl;
		}
	}
	fin.close();
}

void searchAddress()
{
	ifstream fin;
	fin.open("directory.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "File not found" << endl;
		return;
	}
	string name, owner, phone, address, activity;
	cout << "Enter address: ";
	cin >> address;
	while (!fin.eof())
	{
		getline(fin, name);
		getline(fin, owner);
		getline(fin, phone);
		getline(fin, address);
		getline(fin, activity);
		if (address == address)
		{
			cout << "Name: " << name << endl;
			cout << "Owner: " << owner << endl;
			cout << "Phone: " << phone << endl;
			cout << "Address: " << address << endl;
			cout << "Activity: " << activity << endl;
			cout << endl;
		}
	}
	fin.close();
}