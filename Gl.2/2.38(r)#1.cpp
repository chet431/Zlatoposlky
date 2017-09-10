#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int nomer; // номер числа из последовательности
	int k; // определяем k-ю цифру
	int sum; // искомая цифра
	int N[50];
	int num = 101;
	for (int i = 0; i <= 49; i++)
	{
		N[i] = num;
		cout << i << " = " << N[i] <<  endl;
		++num;
	}
	cout << "Введите число (2, 5, 8...) = ";
	do {
		cin >> k;
		nomer = k / 3 + 1;
		sum = N[nomer - 1] / 10 - 10;
		cout << "\nsum = " << sum << endl;
	} while (true);
	system("PAUSE");
	return 0;
}