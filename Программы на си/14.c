//����� ���� ����������� ����� ����� x. ��������� ���������, ������� �������� ��������� ������, ������ � ������ ����� ����� �����. 
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    int x; // ����������� ����� �����
    int first_digit, second_digit, third_digit;

    // ���� ������������ �����
    printf("������� ����������� ����� �����: ");
    scanf("%d", &x);

    // ����� �������� �����������?
    if (x < 100 || x > 999) {
        printf("������: ������� ����������� �����.\n");
        return 1; 
    }

    // �������� �����
    first_digit = x / 100;         // 1 �����
    second_digit = (x / 10) % 10;  // 2 �����
    third_digit = x % 10;          // 3 �����

    // ���������
    printf("������ �����: %d\n", first_digit);
    printf("������ �����: %d\n", second_digit);
    printf("������ �����: %d\n", third_digit);

    return 0;
}
