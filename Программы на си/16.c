//��������� �������� ���������
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    double x, y; // �������� x � y
    double result; // ���������

    // ����������� �������� x � y
    printf("������� �������� x: ");
    scanf("%lf", &x);
    printf("������� �������� y: ");
    scanf("%lf", &y);
    double a =((pow(x,2)/pow(y,3))+(1/x)) ;
    double b =((x/pow(y,2))-(1/y)+(1/x));
    double c = ((pow((x-y), 2) + (4 * x * y)) / (1 + y * pow(x,(-1))));
    // ���������, ��� ����� �� �� 0
    if ( (y * y * y ==0) || (y*y==0) || (x==0) || ((1 + y*(1/x)==0))) {
        printf("������: ������� �� ����.\n");
    }
    else {
        // ��������� �������� ��������� 
        result = (a/b)/c;
        printf("��������� ��������� : %.6lf\n", result);
    }

    return 0;
}
