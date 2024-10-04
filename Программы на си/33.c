//Вычислите сумму ряда
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i; // Вычисляем факториал
    }
    return result;
}

int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    double x;
    int i;

    // Ззапрашиваем  ввод значения x и числа i
    printf("Введите значение x: ");
    scanf("%lf", &x);
    printf("Введите количество членов ряда i: ");
    scanf("%d", &i);

    double sum = 0.0;//накапливает сумму ряда

    printf("Члены ряда:\n");
    for (int j = 0; j <= i; j++) {
        double term = pow(x, j) / factorial(j); // вычисляем текущий член ряда
        sum += term; // суммируем
        printf("a_%d = %.6f\n", j, term); // выводим текущий член
    }

    // выводим результат
    printf("Сумма ряда S_%d при x = %.2f равна: %.6f\n", i, x, sum);
    return 0;
}