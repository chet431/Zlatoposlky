/* Даны три вещественных числа a, b, c.Проверить:
а) выполняется ли неравенство a < b < c;
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
		cout << "Неравенство a < b < c выполняется" << endl;
	}
	else
{
		cout << "Неравенство a < b < c не выполняется" << endl;
	}
	system("PAUSE");
	return 0;
}