#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int f = 0;
	int kom; // номер команды(1 или 2)
	int t; // общее кол-во удалений
	int udal1 = 0, udal2 = 0; // удаление дл€ 1 и 2 команды
	int min1 = 0, min2 = 0; // кол-во минут дл€ 1 и 2 команды
	int min; // кол-во минут удалени€ (2, 5, 10)
	int sum1 = 0, sum2 = 0; // кол-во минут удалени€ дл€ 1 и 2 команды
	int sum = 0; // общее кол-во минут удалени€
	cout << " оличество удалений? = ";
	cin >> t;
	cout << endl;
	do {
	cout << "\n ака€ команда получила удаление? (1 или 2) = ";
	do
	{
		cin >> kom;
		if (kom != 1 && kom != 2)
		{
			cout << "Ќет такой команды! ¬ведите заново!" << endl;;
		}
	} while (kom != 1 && kom != 2);
		cout << endl;
		do
		{
			cout << "—колько минут удалени€ получила команда? (2, 5 или 10) = ";
			cin >> min;
			if (min != 2 && min != 5 && min != 10)
			{
				cout << "¬ведите правильное значение!" << endl;
			}
		} while (min != 2 && min != 5 && min != 10);
		cout << endl;
		if (kom == 1)
		{
			udal1++;
			min1 += min;
			sum += min;
		}
		else
		{
			udal2++;
			min2 += min;
			sum += min;
		}
		f++;
	}while (f != t);
	cout << " оличество удалений первой команды = " << udal1 << "\n оличество минут удалени€ первой команды = " << min1 << endl;
	cout << " оличество удалений второй команды = " << udal2 << "\n оличество минут удалени€ второй команды = " << min2 << endl;
	cout << "ќбщее количество минут удалени€ дл€ двух команд = " << sum << endl;
	system("PAUSE");
	return 0;
}