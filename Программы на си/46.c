////�������� �������������� ������� � �������� ����� �������.����� ���������� ���
////�����, ��� ��������, ������� � ����, �������� ������.��������� ������� ��������.
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
//    // ����� ��������� �������
//    printf("�������� ������:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // ���� ������� ��� ������� � ������ ��������
//    int position;
//    signed char newElement;
//
//    printf("������� ������� ��� ������� (0-%d): ", SIZE - 1);
//    scanf("%d", &position);
//
//    // �������� ������������ ��������� �������
//    if (position < 0 || position >= SIZE) {
//        printf("������: ������������ �������.\n");
//        return 1;
//    }
//
//    printf("������� ����� �������: ");
//    scanf("%hhd", &newElement);
//
//    // ����� ��������� ������
//    for (int i = size - 1; i > position; i--) {
//        arr[i] = arr[i - 1];
//    }
//
//    // ������� ������ ��������
//    arr[position] = newElement;
//
//    // ����� ����������� �������
//    printf("������ ����� ������� ��������:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
