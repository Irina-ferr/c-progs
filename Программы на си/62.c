////��������� ������ �� ����� �signal.txt�, ���������� ��� ���������� �����������
////�������.��� �������� �� ������� ������� ��������� �� 1, ��� �������� �� �������
////������� �������� �� 2. ��������� ����� �������� � 2 ������� � ��������� �����
////�signal2.txt�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//int main() {
//    setlocale(LC_ALL, "RUS");
//    FILE* inputFile;
//    FILE* outputFile;
//    int firstColumn;
//    int secondColumn;
//
//    // ��������� ���� signal.txt ��� ������
//    inputFile = fopen("signal.txt", "r");
//    if (inputFile == NULL) {
//        perror("������ �������� ����� signal.txt");
//        return EXIT_FAILURE;
//    }
//
//    // ��������� ���� signal2.txt ��� ������
//    outputFile = fopen("signal2.txt", "w");
//    if (outputFile == NULL) {
//        perror("������ �������� ����� signal2.txt");
//        fclose(inputFile); // ��������� ������� ���� ����� �������
//        return EXIT_FAILURE;
//    }
//
//    // ������ ������ �� ����� � ������������ ��
//    while (fscanf(inputFile, "%d %d", &firstColumn, &secondColumn) == 2) {
//        firstColumn -= 1; // ��������� �������� ������� ������� �� 1
//        secondColumn *= 2; // �������� �������� ������� ������� �� 2
//
//        // ���������� ����� �������� � �������� ����
//        fprintf(outputFile, "%d %d\n", firstColumn, secondColumn);
//    }
//
//    // ��������� �����
//    fclose(inputFile);
//    fclose(outputFile);
//
//    printf("������ ������� ���������� � ��������� � signal2.txt.\n");
//
//    return EXIT_SUCCESS;
//}
