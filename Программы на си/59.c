////� ��������� ��������� �������� ��������� ���� � �������� � ���� ����
////������������ �����.�������� ���������, �����������, ��� �� ����� ����� ������
////������������������ �������� ���� : �[N = ����]�, ��� ���� � ����� �����, �������
////����� ���������� � ��������� �� - 100 �� 100. ����� ������ � = � � ������, � �����
////����� ������ � �������� �]� ����� ���� ������������ ���������� �������� �
////�������� ���������.���� ��������� ������������������ ����������, ������� ��
////����� ��������� �����, ���������� �� 2. ���� ������������������ �� ����������,
////��� ���� ��������� �������� ������� �� ������� ���������� ���������, �� �������
////�� ����� ��������������� ���������.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//#include <locale.h>
//#pragma warning(disable : 4996)
//
//#define MAX_LINE_LENGTH 256
//
//// ������� ��� �������� �������� � ���������
//void skipWhitespace(const char** ptr) {
//    while (isspace(**ptr)) {
//        (*ptr)++;
//    }
//}
//
//// �������� ���������
//int main() {
//    setlocale(LC_ALL, "RUS");
//    FILE* file;
//    char line[MAX_LINE_LENGTH];
//    int number;
//    int found = 0;
//
//    // �������� ����� ��� ������
//    file = fopen("59.txt", "r");
//    if (file == NULL) {
//        printf("������ �������� �����.\n");
//        return 1;
//    }
//
//    // ������ ���������
//    while (fgets(line, sizeof(line), file)) {
//        const char* ptr = line;
//
//        // ����� "[N = "
//        while ((ptr = strstr(ptr, "[N = ")) != NULL) {
//            ptr += 5; // ���������� "[N = "
//
//            // ������� �������� � ���������
//            skipWhitespace(&ptr);
//
//            // ������ �����
//            if (sscanf(ptr, "%d", &number) == 1) {
//                // �������� ������
//                if (number >= -100 && number <= 100) {
//                    // ����� ������� "]"
//                    ptr = strchr(ptr, ']');
//                    if (ptr == NULL) break;//����� �� ������� �������� ��� �������� ������
//                    printf("������� ��������: %d, ��� ��������� ��������: %d\n", number, number * 2);
//                    found = 1;
//                }
//            }
//
//            // ����� ������� "]"
//            ptr = strchr(ptr, ']');
//            if (ptr == NULL) break; // ���� �� �������, ������� �� �����
//        }
//    }
//
//    fclose(file);
//
//    // ���� ������ �� �������
//    if (!found) {
//        printf("������������������ �� ���������� ��� �������� ��� ���������.\n");
//    }
//
//    return 0;
//}
