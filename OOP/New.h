#pragma once
#include "student.h"
class New : public student
{
private:
	string research;
public:
	New();
	void set_research(string re);
	string get_research();
	void display();
};

