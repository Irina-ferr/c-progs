////��������� ������ �� ����� �signal.txt�, ���������� ��� ���������� ������ ��
////���������� �������.��������� ������ � �������������� ���� �signal_t.dat� �
////���� ������������������ �������� ���� char � ������������, �.�.������ ����
////�signal_t.dat� ����� ��������� ������ �������� �� ������� ������� �signal.txt�,
////������ ���� � ������ �������� �� ������� ������� �signal.txt�, ������ ���� � ������
////�������� �� ������� ������� �signal.txt� � �.�.��� �������� ������ ����������
////������ �������� ��� ���������� �������������� ���������.�������� �������
////������ �signal.txt� � �signal_t.dat�, ���������� ���������� ���������� � ������
////��������.
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#define MAX_LINES 100 // ������������ ���������� �����
//int main() {
//    setlocale(LC_ALL, "RUS");
//    FILE* inputFile, * outputFile;
//    char signal1[MAX_LINES]; // ������ ��� ������� �������
//    char signal2[MAX_LINES]; // ������ ��� ������� �������
//    int count = 0;
//
//    // ��������� ���� signal.txt ��� ������
//    inputFile = fopen("signal.txt", "r");
//    if (inputFile == NULL) {
//        perror("������ �������� ����� signal.txt");
//        return EXIT_FAILURE;
//    }
//
//    // ��������� ������ �� �����
//    while (fscanf(inputFile, "%c %c\n", &signal1[count], &signal2[count]) == 2) {
//        count++;
//        if (count >= MAX_LINES) {
//            break; // �������������� ������������ �������
//        }
//    }
//    fclose(inputFile);
//
//    // ��������� ���� signal_t.dat ��� ������ � �������� �������
//    outputFile = fopen("signal_t.dat", "wb");
//    if (outputFile == NULL) {
//        perror("������ �������� ����� signal_t.dat");
//        return EXIT_FAILURE;
//    }
//
//    // ���������� ������ � ������������ �������
//    for (int i = 0; i < count; i++) {
//        fwrite(&signal1[i], sizeof(char), 1, outputFile);
//        fwrite(&signal2[i], sizeof(char), 1, outputFile);
//    }
//    fclose(outputFile);
//
//    // ���������� ������� ������
//    long size_txt, size_dat;
//
//    inputFile = fopen("signal.txt", "rb");
//    fseek(inputFile, 0, SEEK_END);
//    size_txt = ftell(inputFile);
//    fclose(inputFile);
//
//    outputFile = fopen("signal_t.dat", "rb");
//    fseek(outputFile, 0, SEEK_END);
//    size_dat = ftell(outputFile);
//    fclose(outputFile);
//
//    printf("������ ����� signal.txt: %ld ����\n", size_txt);
//    printf("������ ����� signal_t.dat: %ld ����\n", size_dat);
//
//    return EXIT_SUCCESS;
//}