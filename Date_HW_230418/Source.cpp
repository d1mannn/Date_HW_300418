#include "Date.h"
void DateFilling(int & day, int & month, int & year);
int TaskNumb();

int main()
{	
	setlocale(LC_ALL, "rus");
	int task;
	do
	{
		task = TaskNumb();
		switch (task)
		{
			case 1:
			{	
				int day, month, year;
				DateFilling(day, month, year);
				Date d1(day, month, year);
				cout << "������� ������ ���" << endl;
				DateFilling(day, month, year);
				Date d2(day, month, year);
				if (d1 == d2)
					cout << "���� �����" << endl;
				else
					cout << "���� �� �����" << endl;
				system("pause");
			} break;

			case 2:
			{
				int day, month, year;
				DateFilling(day, month, year);
				Date d1(day, month, year);
				cout << "Before" << endl;
				d1.print();
				cout << "�� ����� ����� ���� ������ ��������?\n ---> + ";
				int change;
				cin >> change;
				d1 += change;
				cout << "After" << endl;
				d1.print();
				system("pause");
			} break;

			case 3:
			{
				int day, month, year;
				DateFilling(day, month, year);
				Date d1(day, month, year);
				cout << "Before" << endl;
				d1.print();
				cout << "�� ����� ����� ���� ������ ��������?\n ---> - ";
				int change;
				cin >> change;
				d1 -= change;
				d1.print();
				system("pause");
			} break;
		}
		
		
		/*d1 += 400;
		d1.print();*/
	} while (task != 0);
	

	system("pause");
	return 0;
}