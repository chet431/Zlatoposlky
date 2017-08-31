#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c, d, v, h;

	cin >> a; // позиция ферзя по вертикале ( 1 <= a <= 8)
	cin >> b; // позиция ферзя по горизонтале ( 1 <= a <= 8)
	cin >> c; // позиция фигуры по вертикале ( 1 <= a <= 8)
	cin >> d; // позиция фигуры по горизонтале ( 1 <= a <= 8)

	v = abs(a - c);
	h = abs(b - d);
	
	
	
	if (v == 1 && h == 2 || v == 2 && h == 1)
	{
		cout << "Ферзь угрожает фигуре" << endl;
	}
	else
	{
		cout << "Ферзь не угрожает фигуре" << endl;
	}
	system("PAUSE");
	return 0;
}