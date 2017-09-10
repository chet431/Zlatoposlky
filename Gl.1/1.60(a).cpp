/* Составить программу обмена значениями трех переменных величин а, b, c по
следующей схеме:
а) b присвоить значение c, а присвоить значение b, с присвоить значение а; */

#include <iostream>
using namespace std;
int main()
{
	int a = 5;
	int b = 7;
	int c = 3;
	int temp;
	temp = a;
	a = b;
	b = c;
	c = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	



	system("PAUSE");
	return 0;
}