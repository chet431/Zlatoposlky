/* . ���� ������������������ ��������� ����� �����, ������������ �����. ��-
��������, ������� ��� � ���� ������������������ �������� ����. (��������,
� ������������������ 10, �4, 12, 56, �4 ���� �������� 3 ����.)*/
#include <iostream>
using namespace std;

int main() {
	int g;
	int kolvo = 0;
	int prev;

	cin >> prev;
	do {
		cin >> g;
		if (g > 0 && prev < 0 || g < 0 && prev > 0)
		{
			++kolvo;
		}
		prev = g;
	} while (g != 0);
	cout << kolvo;
	return 0;
}