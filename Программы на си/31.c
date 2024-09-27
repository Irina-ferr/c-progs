//�������� ���������, ���������� ����� � ����� ������� ��� �������������
//������������������ �������, ��������� � �math.h�.����� � ������� ������������
//� ������������.
#include <stdio.h>
#include <locale.h>

int main() {
    char* locale = setlocale(LC_ALL, "rus");

    double base;
    int exponent;
    double result = 1.0; // ���������� ��� �������� ����������

    // ������ ����� � ������� � ������������
    

    printf("������� ����� (���������): ");
    #pragma warning(suppress : 4996)
    scanf("%lf", &base);
    printf("������� ����� �������: ");
    #pragma warning(suppress : 4996)
    scanf("%d", &exponent);

    // ��������� ������������� �������
    if (exponent < 0) {
        // ��� ������������� ������� ����������� ��������� � ������ ������� �������������
        exponent = -exponent;
        for (int i = 0; i < exponent; i++) {
            result *= base; // �������� ��������� �� ���������
        }
        result = 1.0 / result; // ����������� ���������
    }
    else {
        // ��� ������������� ������� ������ �������� ���������
        for (int i = 0; i < exponent; i++) {
            result *= base; // �������� ��������� �� ���������
        }
    }

    // ����� ����������
    printf("%.2lf � ������� %d ����� %.5lf\n", base, exponent, result);

    return 0;
}
