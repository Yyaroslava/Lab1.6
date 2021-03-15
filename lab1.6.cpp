// lab 1.6.cpp 
#include "Date.h"
#include <iostream>

using namespace std;

int main() {
	Date::Triad t1, t2;
	t1.Read();
	t2.Read();
	t1.Display();
	cout << t2.toString() << endl;
	if (t1.Le(t2)) {
		cout << "t1 < t2" << endl;
	}
	else if (t1.Eq(t2)) {
		cout << "t1 = t2" << endl;
	}
	else {
		cout << "t1 > t2" << endl;
	}
	Date d1, d2;
	d1.Init(t1);
	d2.Init(t2);
	d1.Display();
	cout << d2.toString() << endl;
	if (d1.Le(d2)) {
		cout << "d1 < d2" << endl;
	}
	else if (d1.Eq(d2)) {
		cout << "d1 = d2" << endl;
	}
	else {
		cout << "d1 > d2" << endl;
	}
	return 0;
}