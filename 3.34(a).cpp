#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c, d;
	cin >> a; // позиция ладьи по вертикале ( 1 <= a <= 8)
	cin >> b; // позиция ладьи по горизонтале ( 1 <= a <= 8)
	cin >> c; // позиция фигуры по вертикале ( 1 <= a <= 8)
	cin >> d; // позиция фигуры по горизонтале ( 1 <= a <= 8)
	
	if (a == c || b == d)
	{
		cout << "Ладья угрожает фигуре" << endl;
	}
	else
	{
		cout << "Ладья не угрожает фигуре" << endl;
	}
	system("PAUSE");
	return 0;
}