//�������� ��� � ����� ������
#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    const char* name = "IRINA";

    // �������� ������ �������
    int consoleWidth = 80; 
    int consoleHeight = 20; 

    // �������� ��� � ����� �������
    printf("%-*s\n", consoleWidth, name); // ������� ����� ����
    printf("%*s\n", consoleWidth - strlen(name), name); // ������� ������ ����

    // �������� ������ ������ �� ������� ����
    for (int i = 1; i < consoleHeight - 1; i++) {
        printf("\n");
    }

    printf("%-*s\n", consoleWidth, name); // ������ ����� ����
    printf("%*s\n", consoleWidth - strlen(name), name); // ������ ������ ����

    return 0;
}
