//������������ ������ ��� ����� � ����� ������ ������������.��������� ������
//�������� ������������, ����� �������� ����������� : ��������������,
//��������������, �������������� ��� �������������, � ����� ���������� ��
//������ ����� �����������(������ ������������ �� ����� ����, ���� ����� �����
//	���� ������ �������� ������ ������� �������).
#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");    double a, b, c;

    // ���� ������ ������������
    printf("������� ����� ������ ������������ (a, b, c):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // �������� ������������� ������������
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("������ ������������ �� ����������.\n");
    }
    else {
        // ����������� ���� ������������
        if (a == b && b == c) {
            printf("����������� ��������������.\n");
        }
        else if (a == b || a == c || b == c) {
            printf("����������� ��������������.\n");
        }
        else {
            printf("����������� ��������������.\n");
        }

        // �������� �� ������������� �����������
        double max_side = fmax(a, fmax(b, c));
        double sum_of_squares = a * a + b * b + c * c;

        if (max_side * max_side == sum_of_squares - max_side * max_side) {
            printf("����������� �������� �������������.\n");
        }
    }

    return 0;
}
