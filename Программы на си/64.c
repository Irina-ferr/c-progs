//���������� �������� 2 ������� ������, ���������� � ������������, �� �����
//�signal_t.dat�, ���������� ��� ���������� ����������� �������.���������
//������ �����(����� ������) � ������� � ��������� ����, � ������ �����
//(������������������ ������������� ���������) - � ������� ������ ��������� ����.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_LINES 100 // ������������ ���������� �����

int main() {
    setlocale(LC_ALL, "RUS");
    FILE* inputFile, * outputFile1, * outputFile2;
    char signal1[MAX_LINES]; // ������ ��� ������� ������
    char signal2[MAX_LINES]; // ������ ��� ������� ������
    int count = 0;

    // ��������� �������� ���� signal_t.dat ��� ������
    inputFile = fopen("signal_t.dat", "rb");
    if (inputFile == NULL) {
        perror("������ �������� ����� signal_t.dat");
        return EXIT_FAILURE;
    }

    // ��������� ������ �� ��������� �����
    while (fread(&signal1[count], sizeof(char), 1, inputFile) == 1 &&
        fread(&signal2[count], sizeof(char), 1, inputFile) == 1) {
        count++;
        if (count >= MAX_LINES) {
            break; // ������������� ������������
        }
    }
    fclose(inputFile);

    // ��������� ����� ��� ������
    outputFile1 = fopen("channel1.txt", "w");
    if (outputFile1 == NULL) {
        perror("������ �������� ����� channel1.txt");
        return EXIT_FAILURE;
    }

    outputFile2 = fopen("channel2.txt", "w");
    if (outputFile2 == NULL) {
        perror("������ �������� ����� channel2.txt");
        fclose(outputFile1);
        return EXIT_FAILURE;
    }

    // ���������� ������ � ��������� �����
    for (int i = 0; i < count; i++) {
        fprintf(outputFile1, "%c\n", signal1[i]); // ���������� ������ �����
        fprintf(outputFile2, "%c\n", signal2[i]); // ���������� ������ �����
    }

    // ��������� �����
    fclose(outputFile1);
    fclose(outputFile2);

    printf("������ ������� �������� � channel1.txt � channel2.txt.\n");

    return EXIT_SUCCESS;
}
