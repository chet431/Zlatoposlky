#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int f = 0;
	int kom; // ����� �������(1 ��� 2)
	int t; // ����� ���-�� ��������
	int udal1 = 0, udal2 = 0; // �������� ��� 1 � 2 �������
	int min1 = 0, min2 = 0; // ���-�� ����� ��� 1 � 2 �������
	int min; // ���-�� ����� �������� (2, 5, 10)
	int sum1 = 0, sum2 = 0; // ���-�� ����� �������� ��� 1 � 2 �������
	int sum = 0; // ����� ���-�� ����� ��������
	cout << "���������� ��������? = ";
	cin >> t;
	cout << endl;
	do {
	cout << "\n����� ������� �������� ��������? (1 ��� 2) = ";
	do
	{
		cin >> kom;
		if (kom != 1 && kom != 2)
		{
			cout << "��� ����� �������! ������� ������!" << endl;;
		}
	} while (kom != 1 && kom != 2);
		cout << endl;
		do
		{
			cout << "������� ����� �������� �������� �������? (2, 5 ��� 10) = ";
			cin >> min;
			if (min != 2 && min != 5 && min != 10)
			{
				cout << "������� ���������� ��������!" << endl;
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
	cout << "���������� �������� ������ ������� = " << udal1 << "\n���������� ����� �������� ������ ������� = " << min1 << endl;
	cout << "���������� �������� ������ ������� = " << udal2 << "\n���������� ����� �������� ������ ������� = " << min2 << endl;
	cout << "����� ���������� ����� �������� ��� ���� ������ = " << sum << endl;
	system("PAUSE");
	return 0;
}