///*������������ �������� ������� ������� "�����������" ���������� ��
//�����������*/
//#include <stdio.h>
//#pragma warning(disable : 4996)
//#define SIZE 10
//#include <locale.h>
//void bubbleSort(signed char array[], int size) {
//    // ���������� ��� �������� ���������� ��������
//    signed char temp;
//
//    // ���� ��� ������� �� ���� ��������� �������
//    for (int i = 0; i < size - 1; i++) {
//        // ���� ��� ��������� �������� ���������
//        for (int j = 0; j < size - i - 1; j++) {
//            // ���� ������� ������� ������ ����������, ������ ��
//            if (array[j] > array[j + 1]) {
//                temp = array[j];
//                array[j] = array[j + 1];
//                array[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main() 
//{
//        setlocale(LC_ALL, "RUS");
//
//    signed char arr[SIZE]; // ���������� �������
//    int size = SIZE; // ���������� ������ �������
//
//    //���� �������
//    printf("������� %d ����� ����� (�� -128 �� 127):\n", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("arr[%d]: ", i);
//        scanf("%hhd", &arr[i]); // ���������� %hhd ��� ������ signed char
//    }
//        // ������� ������ �� ����������
//        printf("������ �� ����������: ");
//        for (int i = 0; i < size; i++) {
//            printf("%d ", arr[i]);
//        }
//        printf("\n");
//
//        // ��������� ������
//        bubbleSort(arr, size);
//
//        // ������� ������ ����� ����������
//        printf("������ ����� ����������: ");
//        for (int i = 0; i < size; i++) {
//            printf("%d ", arr[i]);
//        }
//        printf("\n");
//
//        return 0;
//    }
