#include<iostream>
using namespace std;
#include"student.h"
#include"person.h"
#include"New.h"
void print(person p) {
	cout << p.name << ' ' << p.gender << ' ' << p.age << endl;
}
class man {
public:
	void output(person p) {
		cout << p.name << ' ' << p.gender << ' ' << p.age << endl;
	}
};
int main() {
	int x, y;	cin >> x >> y;
	try {
		if (y == 0)
			throw  "Y maxt be greater than zero";
	}
	catch (const char* msg) {
		cout <<msg<< endl;
	}
	return 0;
}

