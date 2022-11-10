#include "New.h"

New::New()
{
	research = "prefix sum";
}

void New::set_research(string re)
{
	research = re;
}

string New::get_research()
{
	return research;
}

void New::display()
{
	student::display();
	cout << research << endl;
}
