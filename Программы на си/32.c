//�������� ���������, ����������� ����� �������� �� 0 �� 10 ����� x
#include <stdio.h>
#include <math.h> 
#include <locale.h>
#pragma warning(disable : 4996)
int main() {
    setlocale(LC_ALL, "rus");
    double x;
    double sum = 0.0;

    
    printf("������� ����� x: ");
    scanf("%lf", &x);

    // ��������� ����� �������� �� 0 �� 10
    for (int i = 0; i <= 10; i++) {
        sum += pow(x, i); 
    }

    // ������� ���������
    printf("����� �������� ����� %.2f �� 0 �� 10 �����: %.2f\n", x, sum);

    return 0; 
}
