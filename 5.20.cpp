/* . Вывести "столбиком" значения корень из 0,1 , 0, 2 , ..., 0,9 . */
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	float num = 0.1;
	for (int i = 1; i <= 9; i++)
	{
		cout << "Корень из " << num << " = " << setprecision(4) << sqrt(num) << endl;
		num += 0.1;
	}
	system("PAUSE");
	return 0;
}