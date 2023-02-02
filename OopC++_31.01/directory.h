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
	void showMenu()
	{
		cout << "1. Write to file" << endl;
		cout << "2. Show all record" << endl;
		cout << "3. Read from file" << endl;
		cout << "4. Search by name" << endl;
		cout << "5. Search by owner" << endl;
		cout << "6. Search by phone" << endl;
		cout << "7. Search by activity" << endl;
		cout << "8. Change record" << endl;
		cout << "9. Exit" << endl;
	}
	void createFile();
	void showAll();
	void writeToFile();
	void readFromFile();
	void searchName();
	void searchOwner();
	void searchPhone();
	void searchActivity();
	void changeRecord();
};
