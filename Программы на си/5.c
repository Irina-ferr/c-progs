//� ���� 9 ������, �� ������ ����� ������ �������� �� 4 ��������. � ����� �������� � �� ����� ����� ��������� n-� ��������? 
#include <stdio.h>
#include <locale.h>

int main() {
    char* locale = setlocale(LC_ALL, "rus");

    int n; // ����� ��������
    int kv = 4; // ���������� ������� �� �����
    int et_v_pod = 9; // ���������� ������ � ��������
    int kv_v_pod = kv * et_v_pod; // ����� ���������� ������� � ��������

    printf("������� ����� ��������: ");
    scanf("%d", &n);

   
    if (n <= 0) {
        printf("������: ����� �������� ������ ���� �������������.\n");
        return 1;
    }

    // ����� ��������
    int entrance_number = (n - 1) / kv_v_pod + 1;

    // ����� �������� � ��������
    int apartment_in_entrance = (n - 1) % kv_v_pod;

    // ����
    int floor_number = apartment_in_entrance / kv + 1;

    // ����� �������� �� �����
    int apartment_on_floor = apartment_in_entrance % kv + 1;

    // ���������
    printf("�������� ����� %d ��������� � �������� %d, �� ����� %d (�������� %d).\n", n, entrance_number, floor_number, apartment_on_floor);

    return 0;
}
