#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c, d;
	cin >> a; // ������� ����� �� ��������� ( 1 <= a <= 8)
	cin >> b; // ������� ����� �� ����������� ( 1 <= a <= 8)
	cin >> c; // ������� ������ �� ��������� ( 1 <= a <= 8)
	cin >> d; // ������� ������ �� ����������� ( 1 <= a <= 8)
	
	if (a == c || b == d)
	{
		cout << "����� �������� ������" << endl;
	}
	else
	{
		cout << "����� �� �������� ������" << endl;
	}
	system("PAUSE");
	return 0;
}