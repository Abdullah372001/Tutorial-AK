#include "student.h"

student::student()
{
	level = 3;
	GPA = 3.67;
	depart = "CS";
}

student::student(string n, string g, int a, int l, double gp, string d) : person(n, g, a)
{
	level = l;
	GPA = gp;
	depart = d;
};

void student::set_level(int l)
{
	level = l;
}

void student::set_GPA(double g)
{
	GPA = g;
}

void student::set_depart(string d)
{
	depart = d;
}

int student::get_level()
{
	return level;
}

double student::get_GPA()
{
	return GPA;
}

string student::get_depart()
{
	return depart;
}

void student::display()
{
	person :: display();
	cout << level << ' ' << GPA << ' ' << depart << endl;
}
