#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c, d;

	cin >> a; // позиция ферзя по вертикале ( 1 <= a <= 8)
	cin >> b; // позиция ферзя по горизонтале ( 1 <= a <= 8)
	cin >> c; // позиция фигуры по вертикале ( 1 <= a <= 8)
	cin >> d; // позиция фигуры по горизонтале ( 1 <= a <= 8)

	if (a == c + 1 || a == c - 1 && b == d + 2 || b == d - 2)
	{
		cout << "Ферзь угрожает фигуре" << endl;
	}
	
	else if (a == c + 2 || a == c - 2 && b == d + 1 || b == d - 1)
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