/*���� �������� ������������������ ����� �����, �������������� �����.
�����:
�) ����� ���� ����� ������������������, ������� ����� x;
�) ���������� ���� ������ ����� ������������������.
*/

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	int x;
	cout << "������� ����� x : ";
	cin >> x;
	int sum = 0;
	int kolvo = 0;
	do
	{
		cin >> a;
		if (a > x)
		{
			sum += a;
		}
		if (a % 2 == 0)
		{
			++kolvo;
		}
	} while (a != 0);
	cout << "\n����� ���� ����� ������������������ ������ x = " << sum << endl;
	cout << "���������� ������ ����� = " << kolvo << endl;
	system("PAUSE");
	return 0;
}