#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c, d, v, h;

	cin >> a; // ������� ����� �� ��������� ( 1 <= a <= 8)
	cin >> b; // ������� ����� �� ����������� ( 1 <= a <= 8)
	cin >> c; // ������� ������ �� ��������� ( 1 <= a <= 8)
	cin >> d; // ������� ������ �� ����������� ( 1 <= a <= 8)

	v = abs(a - c);
	h = abs(b - d);
	
	
	
	if (v == 1 && h == 2 || v == 2 && h == 1)
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