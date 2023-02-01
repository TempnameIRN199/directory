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
