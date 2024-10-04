//Вычислите значение выражения
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    double x, y; // значения x и y
    double result; // результат

    // запрашиваем значения x и y
    printf("Введите значение x: ");
    scanf("%lf", &x);
    printf("Введите значение y: ");
    scanf("%lf", &y);
    double a =((pow(x,2)/pow(y,3))+(1/x)) ;
    double b =((x/pow(y,2))-(1/y)+(1/x));
    double c = ((pow((x-y), 2) + (4 * x * y)) / (1 + y * pow(x,(-1))));
    // проверяем, что делим не на 0
    if ( (y * y * y ==0) || (y*y==0) || (x==0) || ((1 + y*(1/x)==0))) {
        printf("Ошибка: деление на ноль.\n");
    }
    else {
        // вычисляем значение выражения 
        result = (a/b)/c;
        printf("Результат выражения : %.6lf\n", result);
    }

    return 0;
}
