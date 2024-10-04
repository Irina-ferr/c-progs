// n � m � ����� �����. �������� ���������, ������� ������ �� 0, ���� n ������ m, � 1, ���� �� ������. 
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    int n, m; // ���������� ��� �������� �����
    int result; // ��� �������� ����������

    // ���� ���� ����� �����
    printf("������� ��� ����� ����� n � m: ");
    scanf("%d %d", &n, &m);

    // m �� ����� 0?
    if (m == 0) {
        printf("������: ������� �� ���� ����������.\n");
        return 1; // 
    }

    // 0 ���� n ������ m, 1 ���� �� ������
    result = (n % m == 0) ? 0 : 1;

    // ���������
    printf("���������: %d\n", result);

    return 0;
}
