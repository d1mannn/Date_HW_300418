#include "Date.h"


Date::Date(const int & day, const int & month, const int & year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date(const Date & obj)
{
	this->day = obj.day;
	this->month = obj.month;
	this->year = obj.year;
}

void Date::operator+=(int day)
{
	//y % 4 != 0 || y % 100 == 0 && y % 400 != 0
	int temp = 0;
	int countD = this->day;
	int i = 0;
	do
	{
		if (countD == 31 || countD == 30 || countD == 29 || countD == 28)
		{
			if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && countD == 29 && month == 2)
			{
				month++;
				countD = 0; // возможно нужно изменить
			}
			else if (countD == 28 && month == 2)
			{
				month++;
				countD = 0;
			}
			else if (month == 12 && countD == 31)
			{
				month = 1;
				countD = 0;
				year++;
			}
			else if ((month == 4 || month == 6 || month == 9 || month == 11) && countD == 30)
			{
				month++;
				countD = 0;
			}
			else if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && countD == 31)
			{
				countD = 0;
				month++;
			}
		}
		i++;
		countD++;
	} while (i != day);
	this->day = countD;
}



int Date::operator==(Date & obj)
{
	if (this->day == obj.day && this->month == obj.month && this->year == obj.year)
		return 1;
	else
		return 0;
}

void Date::operator-=(int day)
{	
	int temp = 0;
	int i = day;
	int countD = this->day;
	do
	{
		if (countD == 1)
		{
			if (month == 1)
			{
				year--;
				countD = 31 + 1;
				month = 12;
			}
			else if (month == 3)
			{
				month = 2;
				if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
					countD = 29 + 1;
				else
					countD = 28 + 1;
			}
			else if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
			{
				month--;
				countD = 31 + 1;
			}
			else
			{
				month--;
				countD = 30 + 1;
			}
		}
		i--;
		countD--;
	} while (i != 0);
	this->day = countD;
}

void Date::print()
{
	cout << day << "." << month << "." << year << endl;
}


Date::~Date()
{
}
