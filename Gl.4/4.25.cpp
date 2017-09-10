/* Дано двузначное число.Определить:
а) является ли сумма его цифр двузначным числом;*/

#include <iostream>
using namespace std;

int main() {
	int k, sum;
	cin >> k;
	sum = k % 10 + k / 10;
	cout << "sum = " << sum << endl;
	if (sum / 10 >= 1)
	{
		cout << "Its ok" << endl;
	}

	else
	{
		cout << "Not ok" << endl;
	}
	return 0;
}