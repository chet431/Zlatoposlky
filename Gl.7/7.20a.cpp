#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a = -1;
	int n;
	int x;
	cout << "������� ����� ������ ������? = ";
	cin >> n; // ���-�� ����� ������� 
	int sum = 0; // ����� �������
	for (int i = 0; i < n; i++)
	{
		a *= -1;
		cin >> x;
		sum += x * a;
	}
	cout << "sum = " << sum << endl;
	system("PAUSE");
	return 0;
}