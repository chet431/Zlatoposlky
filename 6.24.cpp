/*Дана непустая последовательность целых чисел, оканчивающаяся нулем.
Найти:
а) сумму всех чисел последовательности, больших числа x;
б) количество всех четных чисел последовательности.
*/

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	int x;
	cout << "Введите число x : ";
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
		if (a % 2 == 0 && a > 0)
		{
			++kolvo;
		}
	} while (a != 0);
	cout << "\nСумма всех чисел последовательности больше x = " << sum << endl;
	cout << "Количество четных чисел = " << kolvo << endl;
	system("PAUSE");
	return 0;
}