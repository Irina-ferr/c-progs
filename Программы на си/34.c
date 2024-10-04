//�� ��������������� ������� ��������, ��� ��� n ����������� � ������������� lim sn = exp(x)
//��������, ��������� 5 - � � 10 - � ����� ������������������ ����� ���� ���������� �� exp(x)
#include <stdio.h>
#pragma warning(disable : 4996)
#include <math.h>
#include <locale.h>

double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i; // ��������� ���������
    }
    return result;
}

double exp_approximation(double x, int terms) {
    double sum = 0.0;
    for (int n = 0; n < terms; n++) {
        sum += pow(x, n) / factorial(n); // ��������� ����� ����
    }
    return sum;
}

int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    double x;

    // ����������� � ������������ ���� �������� x
    printf("������� �������� x: ");
    scanf("%lf", &x);

    // ��������� �������� ��� 5-�� � 10-�� ������
    double exp_5 = exp_approximation(x, 6); // ����� �� n=5 (������������)
    double exp_10 = exp_approximation(x, 11); // ����� �� n=10 (������������)
    double exact_exp = exp(x); // ������ �������� exp(x)

    // ��������� �������
    double diff_5 = fabs(exp_5 - exact_exp);
    double diff_10 = fabs(exp_10 - exact_exp);

    // ������� ����������
    printf("��� x = %.2f:\n", x);
    printf("����� �� 5-�� �����: %.6f\n", exp_5);
    printf("����� �� 10-�� �����: %.6f\n", exp_10);
    printf("������ �������� exp(x): %.6f\n", exact_exp);
    printf("������� ��� 5-�� �����: %.6f\n", diff_5);
    printf("������� ��� 10-�� �����: %.6f\n", diff_10);
    return 0;
}