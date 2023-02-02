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

void Directory::showMenu()
{
	cout << "1. Create file" << endl;
	cout << "2. Show all" << endl;
	cout << "3. Write to file" << endl;
	cout << "4. Read from file" << endl;
	cout << "5. Search by name" << endl;
	cout << "6. Search by owner" << endl;
	cout << "7. Search by phone" << endl;
	cout << "8. Search by activity" << endl;
	cout << "9. Change record" << endl;
	cout << "0. Exit" << endl;
}

void Directory::createFile()
{
	ofstream fout;
	fout.open("directory.txt", ios::out);
	fout.close();
}

void Directory::showAll()
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

void Directory::writeToFile()
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

void Directory::readFromFile()
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

void Directory::searchName()
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

void Directory::searchOwner()
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

void Directory::searchPhone()
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

void Directory::searchActivity()
{
	ifstream fin;
	fin.open("directory.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "File not found" << endl;
		return;
	}
	string name, owner, phone, address, activity;
	cout << "Enter activity: ";
	cin >> activity;
	while (!fin.eof())
	{
		getline(fin, name);
		getline(fin, owner);
		getline(fin, phone);
		getline(fin, address);
		getline(fin, activity);
		if (activity == activity)
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

void Directory::changeRecord()
{
	ifstream fin;
	fin.open("directory.txt", ios::in);
	if (!fin.is_open())
	{
		cout << "File not found" << endl;
		return;
	}
	ofstream fout;
	fout.open("temp.txt", ios::out);
	if (!fout.is_open())
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
			cout << "Enter new name: ";
			cin >> name;
			cout << "Enter new owner: ";
			cin >> owner;
			cout << "Enter new phone: ";
			cin >> phone;
			cout << "Enter new address: ";
			cin >> address;
			cout << "Enter new activity: ";
			cin >> activity;
		}
		fout << name << endl;
		fout << owner << endl;
		fout << phone << endl;
		fout << address << endl;
		fout << activity << endl;
	}
	fin.close();
	fout.close();
	remove("directory.txt");
	rename("temp.txt", "directory.txt");
}

int main()
{
	// реализовать программу использу€ класс Directory и функции дл€ работы с файлами
	// использовать функцию showMenu дл€ вывода меню
	// использовать функцию switch дл€ выбора пункта меню
	// использовать функцию exit дл€ выхода из программы
	Directory directory;
	int choice;
	while (true)
	{
		directory.showMenu();
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			directory.createFile();
			directory.writeToFile();
			break;
		case 2:
			directory.showAll();
			break;
		case 3:
			directory.readFromFile();
		case 4:
			directory.searchName();
			break;
		case 5:
			directory.searchOwner();
			break;
		case 6:
			directory.searchPhone();
			break;
		case 7:
			directory.searchActivity();
			break;
		case 8:
			directory.changeRecord();
			break;
		case 9:
			exit(0);
		default:
			cout << "Wrong choice" << endl;
		}
	}
}