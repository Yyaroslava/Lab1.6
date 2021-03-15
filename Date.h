// Date.h 
#pragma once
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Date {
public:
	class Triad {
	private:
		int first;
		int second;
		int third;
	public:
		int getFirst() const { return first; }
		void setFirst(int value) { first = value; }
		int getSecond() const { return second; }
		void setSecond(int value) { second = value; }
		int getThird() const { return third; }
		void setThird(int value) { third = value; }
		void Init(int firstValue, int secondValue, int thirdValue);
		void Display() const;
		void Read();
		bool Le(Date::Triad t) const;
		bool Eq(Date::Triad t) const;
		bool Gt(Date::Triad t) const;
		bool Ne(Date::Triad t) const;
		bool Leq(Date::Triad t) const;
		bool Gtq(Date::Triad t) const;
		const string toString();
	};
	Date::Triad getTriad() const { return t; }
	void setTriad(Date::Triad tValue) { t = tValue; }
	void Init(Date::Triad t);
	void Display() const;
	void Read();
	bool Le(Date d) const;
	bool Eq(Date d) const;
	bool Gt(Date d) const;
	bool Ne(Date d) const;
	bool Leq(Date d) const;
	bool Gtq(Date d) const;
	const string toString();

private:
	Date::Triad t;
};

