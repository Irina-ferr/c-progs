////�������� ��� �������� � ��������� � ���������[a, b] ������.
//
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
//
//    // ���� �������
//    printf("������� %d ����� ����� (�� -128 �� 127):\n", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("arr[%d]: ", i);
//        scanf("%hhd", &arr[i]); // ���������� %hhd ��� ������ signed char
//    }
//
//    // ���� ��������� [a, b]
//    int a, b;
//    printf("������� �������� [a, b] ��� ������ ��������� �� ����:\n");
//    printf("a: ");
//    scanf("%d", &a);
//    printf("b: ");
//    scanf("%d", &b);
//
//    // �������� ������������ ���������
//    if (a < 0 || b >= SIZE || a > b) {
//        printf("������������ ��������. ����������, ���������, ��� 0 <= a <= b < %d.\n", SIZE);
//        return 1; // ���������� ��������� � �������
//    }
//
//    // ������ ��������� � ��������� [a, b] �� ����
//    for (int i = a; i <= b; i++) {
//        arr[i] = 0;
//    }
//
//    // ������ ������� ����� ������
//    printf("������ ����� ������:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
