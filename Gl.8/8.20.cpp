#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int money;
	int sum1 = 0; // ����� ���� ����� �� 10 ���� ��� ���1
	int sum2 = 0; // ��� 2
 	int sum3 = 0; // ��� 3
	const int N = 10;
	int shop1[N];
	int shop2[N];
	int shop3[N];
	for (int i = 0;i < N; i++)
	{
		cout << "������� ����� ��������� ������� �1 � " << i + 1 << "-� ����? = ";
		cin >> money;
		sum1 += money;
		shop1[i] = money;
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "������� ����� ��������� ������� �2 � " << i + 1 << "-� ����? = ";
		cin >> money;
		sum2 += money;
		shop2[i] = money;
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "������� ����� ��������� ������� �3 � " << i + 1 << "-� ����? = ";
		cin >> money;
		sum3 += money;
		shop3[i] = money;
	}
	if (sum1 > sum2 && sum1 > sum3)
	{
		cout << "������� �1 ������� ������������ ����� ����� �� 10 ���� � ������� " << sum1 << " ������." << endl;
	}
	else if (sum2 > sum1 && sum3 > sum2)
	{
		cout << "������� �2 ������� ������������ ����� ����� �� 10 ���� � ������� " << sum2 << " ������." << endl;
	}
	else
	{
		cout << "������� �3 ������� ������������ ����� ����� �� 10 ���� � ������� " << sum3 << " ������." << endl;
	}
	system("PAUSE");
	return 0;
}