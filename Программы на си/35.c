////�������� 3 �������, ���������� �� 5 ��������� ������ ���� : A, B � �.������ A
////��������� ����������, ���������� � ����������, ������ B � ����������, �������
////������� ��������, ������ � � ���������� �������.�������� ������� �� ����� � 3
////������ : ������ A, ��� ��� ������ B, ��� ��� ������ �.//
//#include <stdlib.h>
//#include <time.h>
//#include <locale.h>
//#include <stdio.h>
//#define SIZE 5
//#pragma warning(disable : 4996)
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//    signed char A[SIZE]; // ������ A
//    signed char B[SIZE]; // ������ B
//    signed char C[SIZE]; // ������ C
//
//    // ������������� ���������� ��������� �����
//    srand(time(NULL));
//
//    // ���������� A ���������� � ����������
//    printf("������� %d ����� ����� ��� ������� A (�� -128 �� 127):\n", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("A[%d]: ", i);
//        scanf("%hhd", &A[i]); // ���������� %hhd ��� ������ signed char
//    }
//
//    // ���������� B ����������, ������� ������� ��������
//    for (int i = 0; i < SIZE; i++) {
//        B[i] = (signed char)i; // �������� ������ � signed char
//    }
//
//    // ���������� C ���������� �������
//    for (int i = 0; i < SIZE; i++) {
//        C[i] = (signed char)(rand() % 256 - 128); // ��������� ����� �� -128 �� 127
//    }
//
//    // ����� �������� �� �����
//    printf("\n������ A:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", A[i]);
//    }
//
//    printf("\n\n������ B:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", B[i]);
//    }
//
//    printf("\n\n������ C:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", C[i]);
//    }
//
//    printf("\n");
//
//    return 0;
//}
//
