#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int far = 450;
	int celcium = far * 1.8 + 32;
	cout << "�������� � �������� ������ ������������� ��������-�������� ��� �������� 450 �������� �� ���������� �������� = " << celcium << " ��������" << endl;
	system("PAUSE");
	return 0;
}