#include <cmath>
#include <iostream>
using namespace std;
int main()
{

	int k, n;
	cin >> k; // (k кратно 3)
	n = k / 3 % 10;
	cout << n << endl;
	system("PAUSE");
	return 0;
}