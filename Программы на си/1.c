//n - � ������ �����(������ ��������� 0, ������ 2 � �.�.).
#include <stdio.h>
#include <locale.h>
int main(void) {
	char* locale = setlocale(LC_ALL, "RUS");
	int n;
	printf ("������� ����� ������� �����: ");
	scanf ("%d", &n);
	int num = 2 * (n - 1);
	printf("n-��� ������ �����: %d\n", num);
	return 0;
}