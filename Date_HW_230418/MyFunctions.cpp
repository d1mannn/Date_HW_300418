#include "Date.h"

int TaskNumb()
{	
	system("cls");
	cout << "���� ������ �������������� �������� ��������� ������� 1" << endl;
	cout << "��� �������� += ������� 2" << endl;
	cout << "��� �������� -= ������� 3" << endl;
	cout << "��� ������ ������� 0" << endl;
	int task;
	cin >> task;
	return task;
}

void DateFilling(int & day, int & month, int & year)
{
	cout << "������� ���\n --->  ";
	cin >> year;
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		do
		{	
			cout << "������� �����\n --->  ";
			cin >> month;
		} while (month < 1 || month > 12);
		if (month == 2)
		{
			do
			{
				cout << "������� ����\n --->  ";
				cin >> day;
			} while (day < 1 || day > 29);
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			do
			{
				cout << "������� ����\n --->  ";
				cin >> day;
			} while (day < 1 || day > 30);
		}
		else
		{
			do
			{
				cout << "������� ����\n --->  ";
				cin >> day;
			} while (day < 1 || day > 31);
		}
	}
	else
	{
		do
		{
			cout << "������� �����\n --->  ";
			cin >> month;
		} while (month < 1 || month > 12);
		if (month == 2)
		{
			do
			{
				cout << "������� ����\n --->  ";
				cin >> day;
			} while (day < 1 || day > 28);
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			do
			{
				cout << "������� ����\n --->  ";
				cin >> day;
			} while (day < 1 || day > 30);
		}
		else
		{
			do
			{
				cout << "������� ����\n --->  ";
				cin >> day;
			} while (day < 1 || day > 31);
		}
	}
}