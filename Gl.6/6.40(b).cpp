/* . ���� ����������� ����� n (n > 99). ���������� ��� ������ (� ������) �����.
������ ������ ����� ���������:
�) � �������������� ���� ���������� �����;
�) � �������������� ������ ��������� �����.*/
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	long int n;
	int number;
	cout << "������� n (>99) : ";
	cin >> n;
	while (n > 1000)
	{
		n = n / 10;
	}
	number = n % 10;
	cout << "n = " << n << endl;
	cout << "number = " << number << endl;
	system("PAUSE");
	return 0;
}