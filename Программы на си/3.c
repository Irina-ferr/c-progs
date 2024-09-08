//������� �������� ����� �� �������(a, b), a � b � ����� ?
#include <stdio.h>
#include <locale.h>

int count_odd_numbers(int a, int b) {

    a++;
    b--;

    if (a > b) {
        return 0;
    }

    // (���������� ����� � ��������� + 1) / 2
    int count = (b - a + 1 ) / 2;

    return count;
}

int main() {
    char* locale = setlocale(LC_ALL, "rus");

    int a, b;

    printf("������� 2 ����� ����� (a � b): ");
    scanf("%d %d", &a, &b);

    // ��������, ��� a ������ b
    if (a >= b) {
        printf("������: a ������ ���� ������ b.\n");
        return 1;
    }

    int odd_count = count_odd_numbers(a, b);
    printf("���������� �������� ����� �� ������� (%d, %d): %d\n", a, b, odd_count);

    return 0;
}
