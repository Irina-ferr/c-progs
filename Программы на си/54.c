//������ � ���������� x, ��������� ��������� �������� � ������� �� ����� � �������
//����� ����� �����, ������� �� �������� � ������������� ���������� ����� ��
//��������� ����� ��� �������� �� ����������������� ����������.
#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "RUS");
    unsigned int x; // �������� �����
    unsigned char* bytes; // ��������� �� ������ ������

    // ���� ����� x
    printf("������� ����� ����� (0-4294967295): ");
    scanf("%u", &x);

    // ��������� ������ ��� 4 ������
    bytes = (unsigned char*)malloc(4 * sizeof(unsigned char));
    if (bytes == NULL) {
        printf("������ ��������� ������.\n");
        return 1;
    }

    // ���������� ����� �� �����
    for (int i = 0; i < 4; i++) {
        bytes[i] = (x >> (24 - i * 8)) & 0xFF; // ���������� ������� �����
    }

    // ����� ������ � �������
    printf("����� ����� %u:\n", x);
    for (int i = 0; i < 4; i++) {
        printf("���� %d: %u\n", i + 1, bytes[i]);
    }

    // ������������ ���������� ������
    free(bytes);

    return 0;
}
