/* ���� ����� ����� k (1 k 150) � ������������������ ����
101102103...149150, � ������� �������� ������ ��� ����������� ����� �� 101
�� 150. 
���������� k-� �����, ���� ��������, ���:k � ���� �� ����� 1, 4, 7, ...;*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int k, n;
	cin >> k;
	if (k / 1 == k)
	{
		cout << k << "-� ����� ����a 1" << endl;
	}
	else 
	{
		cout << k << "-� ����� �� ����� 1" << endl;
	}
	system("PAUSE");
	return 0;
}