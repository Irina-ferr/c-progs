//��������� ����� ����
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i; // ��������� ���������
    }
    return result;
}

int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    double x;
    int i;

    // ������������  ���� �������� x � ����� i
    printf("������� �������� x: ");
    scanf("%lf", &x);
    printf("������� ���������� ������ ���� i: ");
    scanf("%d", &i);

    double sum = 0.0;//����������� ����� ����

    printf("����� ����:\n");
    for (int j = 0; j <= i; j++) {
        double term = pow(x, j) / factorial(j); // ��������� ������� ���� ����
        sum += term; // ���������
        printf("a_%d = %.6f\n", j, term); // ������� ������� ����
    }

    // ������� ���������
    printf("����� ���� S_%d ��� x = %.2f �����: %.6f\n", i, x, sum);
    return 0;
}