/* Если целое число m делится нацело на целое число n, то вывести на экран частное от деления, в противном случае вывести сообщение "m на n нацело не делится". */
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
		cout << "m на n нацело не делится" << endl;
	}
	system("PAUSE");
	return 0;
}