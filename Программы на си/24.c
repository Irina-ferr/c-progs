//����������� ������� ��������� �� 5, � ����� :
//1 x 5 = 5,
//2 x 5 = 10,
//...
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    int multiplier = 5; // �����, �� ������� ����� ��������

    // ���� �� 1 �� 10 ��� ������ ������� ���������
    for (int i = 1; i <= 10; i++) {
        int result = i * multiplier; // ���������� ����������
        printf("%d x %d = %d\n", i, multiplier, result); // ����� � ������ �������
    }

    return 0;
}
