// Date.cpp 
#include "Date.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

void Date::Init(Date::Triad tValue) {
	setTriad(tValue);
}

void Date::Display() const {
	t.Display();
}

void Date::Read() {
	Date::Triad tValue;
	tValue.Read();
	Init(tValue);
}

bool Date::Le(Date d) const {
	return t.Le(d.getTriad());
}

bool Date::Leq(Date d) const {
	return t.Leq(d.getTriad());
}

bool Date::Eq(Date d) const {
	return t.Eq(d.getTriad());
}

bool Date::Ne(Date d) const {
	return t.Ne(d.getTriad());
}

bool Date::Gt(Date d) const {
	return t.Gt(d.getTriad());
}

bool Date::Gtq(Date d) const {
	return t.Gtq(d.getTriad());
}

const string Date::toString() {
	stringstream sout;
	sout << t.toString();
	return sout.str();
}

void Date::Triad::Init(int firstValue, int secondValue, int thirdValue) {
	setFirst(firstValue);
	setSecond(secondValue);
	setThird(thirdValue);
}

void Date::Triad::Display() const {
	cout << first << "." << second << "." << third << endl;
}

void Date::Triad::Read() {
	int firstValue;
	int secondValue;
	int thirdValue;
	cout << "Enter triad " << endl << endl;
	cout << "first = ? "; cin >> firstValue;
	cout << "second = ? "; cin >> secondValue;
	cout << "third = ? "; cin >> thirdValue;
	Init(firstValue, secondValue, thirdValue);
}

bool Date::Triad::Le(Date::Triad t) const {
	if (first < t.first) return true;
	if (first > t.first) return false;
	if (second < t.second) return true;
	if (second > t.second) return false;
	if (third < t.third) return true;
	if (third > t.third) return false;
	return false;
}

bool Date::Triad::Leq(Date::Triad t) const {
	if (first < t.first) return true;
	if (first > t.first) return false;
	if (second < t.second) return true;
	if (second > t.second) return false;
	if (third < t.third) return true;
	if (third > t.third) return false;
	return true;
}

bool Date::Triad::Eq(Date::Triad t) const {
	if ((first == t.first) && (second == t.second) && (third == t.third)) return true;
	return false;
}

bool Date::Triad::Ne(Date::Triad t) const {
	if ((first == t.first) && (second == t.second) && (third == t.third)) return false;
	return true;
}

bool Date::Triad::Gt(Date::Triad t) const {
	if (first < t.first) return false;
	if (first > t.first) return true;
	if (second < t.second) return false;
	if (second > t.second) return true;
	if (third < t.third) return false;
	if (third > t.third) return true;
	return false;
}

bool Date::Triad::Gtq(Date::Triad t) const {
	if (first < t.first) return false;
	if (first > t.first) return true;
	if (second < t.second) return false;
	if (second > t.second) return true;
	if (third < t.third) return false;
	if (third > t.third) return true;
	return true;
}

const string Date::Triad::toString() {
	stringstream sout;
	sout << first << "." << second << "." << third;
	return sout.str();
}
