//�� ������ ������ L ���������� ����� ������ x.
//������� ������ ����������� ������� ��������?
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    float L, x; // ���������� ��� ����� ������ � ����� �������
    int max_pieces; // ��� �������� ���� ���������� ��������

    // ���� ����� ������ � ����� �������
    printf("������� ����� ������ (L): ");
    scanf("%f", &L);
    printf("������� ����� ������� (x): ");
    scanf("%f", &x);

    // �� ����� 0?
    if (x <= 0) {
        printf("������: ����� ������� ������ ���� ������ 0.\n");
        return 1;
    }

    // ������������ ���������� ��������
    //max_pieces = 0;
    //for (float a = L; a >= x; a -= x) { // ������������ ������� � ������������
    //    max_pieces++;
    //}
    max_pieces = (int)(L / x);

    // ���������
    printf("������������ ���������� ��������: %d\n", max_pieces);

    return 0;
}
