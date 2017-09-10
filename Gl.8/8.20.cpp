#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int money;
	int sum1 = 0; // общая сума денег за 10 дней для ком1
	int sum2 = 0; // для 2
 	int sum3 = 0; // для 3
	const int N = 10;
	int shop1[N];
	int shop2[N];
	int shop3[N];
	for (int i = 0;i < N; i++)
	{
		cout << "Сколько денег заработал магазин №1 в " << i + 1 << "-й день? = ";
		cin >> money;
		sum1 += money;
		shop1[i] = money;
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "Сколько денег заработал магазин №2 в " << i + 1 << "-й день? = ";
		cin >> money;
		sum2 += money;
		shop2[i] = money;
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "Сколько денег заработал магазин №3 в " << i + 1 << "-й день? = ";
		cin >> money;
		sum3 += money;
		shop3[i] = money;
	}
	if (sum1 > sum2 && sum1 > sum3)
	{
		cout << "Магазин №1 получил максимальный общий доход за 10 дней в размере " << sum1 << " рублей." << endl;
	}
	else if (sum2 > sum1 && sum3 > sum2)
	{
		cout << "Магазин №2 получил максимальный общий доход за 10 дней в размере " << sum2 << " рублей." << endl;
	}
	else
	{
		cout << "Магазин №3 получил максимальный общий доход за 10 дней в размере " << sum3 << " рублей." << endl;
	}
	system("PAUSE");
	return 0;
}