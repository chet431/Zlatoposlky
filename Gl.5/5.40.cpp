/* ���� ����������� ����� n � ������������ ����� a1 ,a2 , ... an.
���������� ����� ���� ������������ ����� */
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	float a;
	float sum = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
	}
	cout << "����� ���� ������������ ����� = " << sum << endl;
	system("PAUSE");
	return 0;
}