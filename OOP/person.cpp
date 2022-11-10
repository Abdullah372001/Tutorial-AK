#include "person.h"

person::person()
{
	name = "shahid";
	gender = "male";
	age = 20;

}

person::person(string n, string g, int a)
{
	name = n;
	gender = g;
	age = a;
}

void person::set_name(string n)
{
	name = n;
}

void person::set_gender(string g)
{
	gender = g;
}
void person::set_age(int a) {
	age = a;
}

string person::get_name()
{
	return name;
}

string person::get_gender()
{
	return gender;
}

int person::get_age() {
	return age;
}

void person::display()
{
	cout << name << ' ' << gender << ' ' << age << endl;
}
