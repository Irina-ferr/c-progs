//Вычислите значение выражения
#include <stdio.h>
#pragma warning(disable : 4996)
#define PI 3.1415926535
#include <locale.h>
#include <math.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    double alpha; // значения x и y
    double result; // результат

    // запрашиваем значения x и y
    printf("Введите значение alpha: ");
    scanf("%lf", &alpha);
    
    double a = pow((cos(PI + (alpha / 4))), 2);
    double b = 1 + pow (tan ((3*alpha/4)-(3*PI/2)), 2);
    double c = pow(sin((9*PI/2)+(alpha/2)), (-1));
    double d = pow(tan((5 * PI / 2) - (alpha / 4)), 2) - pow(tan((3 * alpha / 4) - (7 * PI / 2)), 2);
    // проверяем, что делим не на 0
    if (c * d == 0) {
        printf("Ошибка: деление на ноль.\n");
    }
    else {
        // вычисляем значение выражения 
        result = (a * b)/(c*d);
        printf("Результат выражения : %.6lf\n", result);
    }

    return 0;
}