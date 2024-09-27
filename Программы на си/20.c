//�������� ���������, ������� ����������� �������� x, y, z, � ����� �������
//�������� ��������� ������� max(x, min(y, z)), � ����� min(min(x, y), z).
#include <stdio.h>

// ������� ��� ���������� ��������� ���� �����
int max(int a, int b) {
    return (a > b) ? a : b;
}

// ������� ��� ���������� �������� ���� �����
int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y, z;

    // ����������� � ������������ ���� �������� x, y � z
    printf("������� �������� x: ");
    scanf("%d", &x);
    printf("������� �������� y: ");
    scanf("%d", &y);
    printf("������� �������� z: ");
    scanf("%d", &z);

    // ��������� min(y, z)
    int min_yz = min(y, z);

    // ��������� max(x, min(y, z))
    int result_max = max(x, min_yz);

    // ��������� min(min(x, y), z)
    int min_xy = min(x, y);
    int result_min = min(min_xy, z);

    // ������� ����������
    printf("max(x, min(y, z)) = max(%d, min(%d, %d)) = %d\n", x, y, z, result_max);
    printf("min(min(x, y), z) = min(min(%d, %d), %d) = %d\n", x, y, z, result_min);

    return 0;
}
