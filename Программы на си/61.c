////������������� ��������� ���� �signal.txt�, ���������� 2 ������� �� 20 �����
////������������� ��������.� ������ ������� ������� ����� ������, �� ������ �
////������ � �������� 10, ������������ � �������� �� 1 �� 5.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <locale.h>
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//    FILE* file = fopen("signal.txt", "w"); // ��������� ���� ��� ������
//    if (file == NULL) {
//        perror("������ �������� �����");
//        return EXIT_FAILURE;
//    }
//
//    srand(time(NULL)); // ������������� ���������� ��������� �����
//
//    for (int i = 1; i <= 20; i++) {
//        int value;
//
//        // ���������� �������� ��� ������� � �������� 10
//        if (i % 10 < 5) {
//            value = (rand() % 5) + 1; // ��������� �� 1 �� 5
//        }
//        else {
//            value = (rand() % 5) + 1; // ��������� �� 1 �� 5
//        }
//
//        fprintf(file, "%d %d\n", i, value); // ���������� ����� ������ � ��������
//    }
//
//    fclose(file); // ��������� ����
//    printf("���� signal.txt ������� ������.\n");
//
//    return EXIT_SUCCESS;
//}
