/* ���� ����� ����� m ������� ������ �� ����� ����� n, �� ������� �� ����� ������� �� �������, � ��������� ������ ������� ��������� "m �� n ������ �� �������". */
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int m, n;
	cin >> m >> n;
	if (m % n == 0)
	{
		cout << m / n << endl;
	}
	else
	{
		cout << "m �� n ������ �� �������" << endl;
	}
	system("PAUSE");
	return 0;
}