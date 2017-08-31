/* Даны три вещественных числа a, b, c.Проверить:
б) выполняется ли неравенство b > a > c.
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
		cout << "Неравенство b > a > c выполняется" << endl;
	}
	else
	{
		cout << "Неравенство b > a > c не выполняется" << endl;
	}
	system("PAUSE");
	return 0;
}