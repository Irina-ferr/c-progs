//�������� ���������, ����������� ���� �� � ������������� ������� ���� �� ����
//�������� �������.

#include <locale.h>
#include <stdio.h>
#define SIZE 10 // ������
#pragma warning(disable : 4996)

int main() {
    setlocale(LC_ALL, "RUS");
    signed char arr[SIZE]; // ���������� �������
    int hasOdd = 0; // ���� ��� �������� ��������� ��������

    // ���� �������
    printf("������� %d ����� ����� (�� -128 �� 127):\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d]: ", i);
        scanf("%hhd", &arr[i]); // ���������� %hhd ��� ������ signed char
    }

    // �������� �� �������� �������
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0) { // ���� ������� ��������
            hasOdd = 1; // ������������� ����
            break; // ��������� ����, ���� ��������
        }
    }

    // ����� ����������
    if (hasOdd) {
        printf("� ������� ���� ���� �� ���� �������� �������.\n");
    }
    else {
        printf("� ������� ��� �������� ���������.\n");
    }

    return 0;
}

