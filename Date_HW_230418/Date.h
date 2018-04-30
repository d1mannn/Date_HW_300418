#pragma once
#include <iostream>
using namespace std;
class Date
{
public:
	Date() = default;
	Date(const int &day, const int &month, const int &year);
	Date(const Date &obj);

	void operator+=(int day);
	int operator == (Date &obj);
	void operator-=(int day);
	void print();
	virtual ~Date();
private:
	int day;
	int month;
	int year;
};

