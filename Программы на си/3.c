//������� �������� ����� �� �������(a, b), a � b � ����� ?
#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)
int count_odd_numbers(int a, int b) {

    if (a > b) {
        return 0;
    }
    a++;
    b--;
    int count=0;
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            count++;
        }

    }
    return count;
    }
int main() {
    char* locale = setlocale(LC_ALL, "rus");

    int a, b;

    printf("������� 2 ����� ����� (a � b): ");
    scanf("%d %d", &a, &b);

    
    if (a >= b) {
        printf("������: a ������ ���� ������ b.\n");
        return 1;
    }

    int odd_count = count_odd_numbers(a, b);
    printf("���������� �������� ����� �� ������� (%d, %d): %d\n", a, b, odd_count);

    return 0;
}
