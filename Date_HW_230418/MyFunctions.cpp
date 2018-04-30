#include "Date.h"

int TaskNumb()
{	
	system("cls");
	cout << "≈сли хотите протестировать оператор сравнени€ введите 1" << endl;
	cout << "ƒл€ оператоа += введите 2" << endl;
	cout << "ƒл€ оператоа -= введите 3" << endl;
	cout << "ƒл€ выхода введите 0" << endl;
	int task;
	cin >> task;
	return task;
}

void DateFilling(int & day, int & month, int & year)
{
	cout << "¬ведите год\n --->  ";
	cin >> year;
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		do
		{	
			cout << "¬ведите мес€ц\n --->  ";
			cin >> month;
		} while (month < 1 || month > 12);
		if (month == 2)
		{
			do
			{
				cout << "¬ведите дату\n --->  ";
				cin >> day;
			} while (day < 1 || day > 29);
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			do
			{
				cout << "¬ведите дату\n --->  ";
				cin >> day;
			} while (day < 1 || day > 30);
		}
		else
		{
			do
			{
				cout << "¬ведите дату\n --->  ";
				cin >> day;
			} while (day < 1 || day > 31);
		}
	}
	else
	{
		do
		{
			cout << "¬ведите мес€ц\n --->  ";
			cin >> month;
		} while (month < 1 || month > 12);
		if (month == 2)
		{
			do
			{
				cout << "¬ведите дату\n --->  ";
				cin >> day;
			} while (day < 1 || day > 28);
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			do
			{
				cout << "¬ведите дату\n --->  ";
				cin >> day;
			} while (day < 1 || day > 30);
		}
		else
		{
			do
			{
				cout << "¬ведите дату\n --->  ";
				cin >> day;
			} while (day < 1 || day > 31);
		}
	}
}