//����������� � ������� �������� ����� �� 3 �� 25.
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    // �������� � 3 � ���� �� 25 � ����� 2, ����� �������� ������ �������� �����
    for (int i = 3; i <= 25; i += 2) {
        printf("%d\n", i); // ������� ������� �������� �����
    }

    return 0;
}
