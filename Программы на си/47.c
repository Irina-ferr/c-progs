//����������� ������� ��������������, ����������� ���������� � ���������
//��������� �������.
#include <stdio.h>
#include <math.h> // ��� ������� sqrt
#pragma warning(disable : 4996)
#define SIZE 10
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    signed char arr[SIZE]; // ���������� �������
    int size = SIZE; // ���������� ������ �������

    // ���� �������
    printf("������� %d ����� ����� (�� -128 �� 127):\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d]: ", i);
        scanf("%hhd", &arr[i]); // ���������� %hhd ��� ������ signed char
    }

    // ������ �������� ���������������
    double sum = 0.0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    double mean = sum / size;

    // ������ ���������
    double variance_sum = 0.0;
    for (int i = 0; i < SIZE; i++) {
        variance_sum += (arr[i] - mean) * (arr[i] - mean);
    }
    double variance = variance_sum / size;

    // ������ ������������ ����������
    double std_deviation = sqrt(variance);

    // ����� �����������
    printf("������� ��������������: %.2f\n", mean);
    printf("���������: %.2f\n", variance);
    printf("����������� ����������: %.2f\n", std_deviation);

    return 0;
}
