////������� ������ ����� � ����� ���������� � x �������� ?
#include <stdio.h>
#include <locale.h>

int main() {
    char* locale = setlocale(LC_ALL, "rus");
    int x; // ���������� ������
    int hours, minutes, seconds;

    #pragma warning(disable : 4996)

    printf("������� ���������� ������: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("������: ���������� ������ �� ����� ���� �������������.\n");
        return 1;
    }

    // ��������� ���������� �����
    hours = x / 3600; // 1 ��� = 3600 ������

    // ��������� ���������� ������� ����� �����
    seconds = x % 3600;

    // �������� ���������� ������ ����� �� ���������� ������
    minutes = seconds / 60; // 1 ������ = 60 ������

    // ���������� �������
    seconds = seconds % 60;

    // ������� ���������
    printf("%d ������ = %d �����, %d ����� � %d ������\n", x, hours, minutes, seconds);

    return 0;
}
