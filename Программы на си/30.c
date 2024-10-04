//�������� ��������� ���������� ���������� ���������� ������������� �����
#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)

// ������� ��� ���������� ����������
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // ��������� 0 � 1 ����� 1
    }
    unsigned long long result = 1; // ���������� ��� �������� ����������
    for (int i = 2; i <= n; i++) {
        result *= i; // �������� ��������� �� ������� �������� i
    }
    return result;
}

int main() {
    char* locale = setlocale(LC_ALL, "rus");

    int number;

    printf("������� ����� ��������������� �����: ");
    #pragma warning(suppress : 4996)
    scanf("%d", &number); // ��������� ����� �� ������������

    // �������� �� �����������������
    if (number < 0) {
        printf("������: ��������� ��������� ������ ��� ��������������� �����.\n");
    }
    else {
        unsigned long long fact = factorial(number); // ��������� ���������
        printf("��������� %d ����� %llu\n", number, fact); // ������� ���������
    }

    return 0;
}
