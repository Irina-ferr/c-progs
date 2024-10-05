////�������� �������� ���������, ������ � �������� ��������� n - �� ���� ����������
////x � ���� ��������������� ��������.
//#include <locale.h>
//#pragma warning(disable : 4996)
//#include <stdio.h>
//
//// ������ ��� ��������� n-�� ����
//#define SET_BIT(x, n) ((x) | (1U << (n)))
//
//// ������ ��� ������ n-�� ����
//#define CLEAR_BIT(x, n) ((x) & ~(1U << (n)))
//
//// ������ ��� �������� ��������� n-�� ����
//#define CHECK_BIT(x, n) (((x) >> (n)) & 1U)
//
//int main() {
//	setlocale(LC_ALL, "RUS");
//    unsigned char x = 0b00000000; // ���������� ��� ���� ����� 0
//    int n;
//    int choice;
//
//    while (1) {
//        printf("\n������� ����: %02X\n", x);
//        printf("�������� ��������:\n");
//        printf("1. ���������� ���\n");
//        printf("2. �������� ���\n");
//        printf("3. ��������� ���\n");
//        printf("4. �����\n");
//        printf("��� �����: ");
//        scanf("%d", &choice);
//
//        if (choice == 4) {
//            break; // ����� �� ���������
//        }
//
//        printf("������ ����� ���� (0-7): ");
//        scanf("%d", &n);
//
//        if (n < 0 || n > 7) {
//            printf("������: ����� ���� ������ ���� � ��������� �� 0 �� 7.\n");
//            continue;
//        }
//
//        switch (choice) {
//        case 1:
//            x = SET_BIT(x, n);
//            printf("��� %d ����������.\n", n);
//            break;
//        case 2:
//            x = CLEAR_BIT(x, n);
//            printf("��� %d �������.\n", n);
//            break;
//        case 3:
//            if (CHECK_BIT(x, n)) {
//                printf("��� %d ����������.\n", n);
//            }
//            else {
//                printf("��� %d �� ����������.\n", n);
//            }
//            break;
//        default:
//            printf("������: �������� �����.\n");
//            break;
//        }
//    }
//
//    return 0;
//}