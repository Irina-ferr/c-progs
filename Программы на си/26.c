//�������� ��� � ����� ������
#include <stdio.h>
#include <string.h>

int main() {
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
