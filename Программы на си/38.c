////������� ������������ � ����������� �������� �������.
//#include <stdio.h>
//#include <limits.h> // ��� ������������� CHAR_MIN � CHAR_MAX
//#pragma warning(disable : 4996)
//#define SIZE 10
//#include <locale.h>
//
//
//int main() {
//    // ��������� � �������������� ������ signed char
//   
//    setlocale(LC_ALL, "RUS");
//    signed char arr[SIZE]; // ���������� �������
//    int size = SIZE; // ���������� ������ �������
//    //���� �������
//    printf("������� %d ����� ����� (�� -128 �� 127):\n", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("arr[%d]: ", i);
//        scanf("%hhd", &arr[i]); // ���������� %hhd ��� ������ signed char
//    }
//    // �������������� min � max ���������� �� �������
//    signed char min = CHAR_MAX; // ��������� �������� ��� min
//    signed char max = CHAR_MIN; // ��������� �������� ��� max
//
//    // �������� �� �������
//    for (int i = 0; i < size; i++) {
//        if (arr[i] < min) {
//            min = arr[i]; // ��������� min
//        }
//        if (arr[i] > max) {
//            max = arr[i]; // ��������� max
//        }
//    }
//
//    // ������� ����������
//    printf("����������� �������: %d\n", min);
//    printf("������������ �������: %d\n", max);
//
//    return 0;
//}
