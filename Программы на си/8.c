//n � ����� �����. �������� ���������, ����������� ������ ��� ��������� �����. 
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    int n; // ��������� �����
    int last_digit; // ��������� �����

    // ���� �����
    printf("������� ����� �����: ");
    scanf("%d", &n);

    // ������� ��������� �����
    last_digit = n % 10;

    // ���������
    printf("��������� ����� ����� %d: %d\n", n, last_digit);

    return 0;
}
