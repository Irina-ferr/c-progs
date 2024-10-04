//�������� ���������, ������� ����������� �������� x, � ����� ������� ��������
//��������� ������� �� x :
//sign(x) = 1, ���� x > 0
//sign(x) = 0, ���� x = 0
//sign(x) = -1, ���� x < 0
#pragma warning(disable : 4996)

#include <stdio.h>
#include <locale.h>
int sign(int x) {
    if (x > 0) {
        return 1;   // ���������� 1, ���� x ������ 0
    }
    else if (x == 0) {
        return 0;   // ���������� 0, ���� x ����� 0
    }
    else {
        return -1;  // ���������� -1, ���� x ������ 0
    }
}


int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    int x;

    // ����������� � ������������ ���� �������� x
    printf("������� �������� x: ");
    scanf("%d", &x);

    // ������� ��������� ������� sign(x)
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}
