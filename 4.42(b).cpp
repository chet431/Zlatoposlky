/* ���� ��� ������������ ����� a, b, c.���������:
�) ����������� �� ����������� b > a > c.
*/
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c;
	cin >> a >> b >> c;
	if (b > a && b > c && a > c)
	{
		cout << "����������� b > a > c �����������" << endl;
	}
	else
	{
		cout << "����������� b > a > c �� �����������" << endl;
	}
	system("PAUSE");
	return 0;
}