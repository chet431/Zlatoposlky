/* ���� ��� ������������ ����� a, b, c.���������:
�) ����������� �� ����������� a < b < c;
*/
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && b < c)
	{
		cout << "����������� a < b < c �����������" << endl;
	}
	else
{
		cout << "����������� a < b < c �� �����������" << endl;
	}
	system("PAUSE");
	return 0;
}