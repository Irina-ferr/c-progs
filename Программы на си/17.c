//��������� �������� ���������
//��������� �������� ���������
#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    float a; // �������� a
    float result; // ���������


    // ����������� �������� x � y
    printf("������� �������� a: ");
    scanf("%lf", &a);
    float a_1 = pow ((1 + pow(a, (-0.5))), (1.0 / 6));
    float a_2 = pow((1 + pow(a, (0.5))), (-1.0 / 3));
    float a_3 = pow((pow(a, (0.5))- 1), (1.0 / 3));
    float a_4 = pow((1 - pow(a, (-0.5))), (-1.0 / 6));
    float a_5 = pow(a,(1.0/12))/3;
    float a_6 = sqrt(a) + sqrt(a - 1);



    // ���������, ��� ����� �� �� 0
    if ((pow((pow(a, 0.5) + 1), (-1.0 / 3)) == 0) || (pow((1 - pow(a, (-1.0 / 2))), (-1.0 / 6)) == 0) || ((sqrt(a) + (sqrt(a - 1))) == 0)) {
        printf("������: ������� �� ����.\n");
    }
    else {
        // ��������� �������� ��������� 
        result =pow(((a_1/a_2)- (a_3 / a_4)),(-2))*(a_5/a_6);
        printf("��������� ��������� : %.6lf\n", result);
     
    }

    return 0;
}
