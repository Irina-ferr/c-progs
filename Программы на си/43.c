////���� �������� ������ ��������� �����, �������� �� ���� ������.
//#include <stdio.h>
//#pragma warning(disable : 4996)
//#define SIZE 10
//#include <locale.h>
//
//int main()
//{
//    setlocale(LC_ALL, "RUS");
//
//    signed char arr[SIZE]; // ���������� �������
//    int size = SIZE; // ���������� ������ �������
//    signed char threshold; // ���������� ��� �������� ��������� �����
//
//    // ���� �������
//    printf("������� %d ����� ����� (�� -128 �� 127):\n", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("arr[%d]: ", i);
//        scanf("%hhd", &arr[i]); // ���������� %hhd ��� ������ signed char
//    }
//
//    // ���� ��������� �����
//    printf("������� �����, �� ������� ����� �������� �������� �������, ������ ��������:\n");
//    scanf("%hhd", &threshold); // ���������� %hhd ��� ������ signed char
//
//    // ������ ��������� �������
//    for (int i = 0; i < SIZE; i++) {
//        if (arr[i] < threshold) {
//            arr[i] = threshold; // ������ �������� �� threshold, ���� �� ������
//        }
//    }
//
//    // ����� ����������� �������
//    printf("���������� ������:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
