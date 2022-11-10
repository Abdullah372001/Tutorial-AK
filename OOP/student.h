#pragma once
#include "person.h"
class student : public person
{
private:
	int level;
	double GPA;
	string depart;
public:
	student();
	student(string n, string g, int a, int l, double gp, string d);
	void set_level(int l);
	void set_GPA(double g);
	void set_depart(string d);
	int get_level();
	double get_GPA();
	string get_depart();
	void display();
};

