#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int sum = 0;
	int n;
	cout << "—колько чисел хотите ввести? = ";
	cin >> n; // кол-во чисел массива 
	int num; // числа массива
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "¬ведите " << i + 1 << "-е число : ";
		cin >> num;
		cout << "\n";
		a[i] = num;
	}
	sum = a[0] - a[1] + a[2];
	for (int i = 3; i < n; i++)
	{
		if (i % 2 != 0)
		{
			sum -= a[i];
		}
		else
		{
			sum += a[i];
		}
	}
	cout << "a(1) + a(5) = " << a[0] + a[4] << endl;
	cout << "a(1) - a(2) = " << a[0] - a[1] << endl;
	cout << "sum = " << sum << endl;
	system("PAUSE");
	return 0;
}