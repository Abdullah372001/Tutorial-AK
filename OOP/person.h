#pragma once
#include<iostream>
using namespace std;
class person
{
private:
	string name;
	string gender;
	int age;
public:
	person();   
	person(string n, string g, int a);
	void set_name(string n);
	void set_gender(string g);
	void set_age(int a);
	string get_name();
	string get_gender();
	int get_age();
	void display();
	friend void print(person p);
	friend class man;
};

