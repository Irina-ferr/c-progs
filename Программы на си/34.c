//из математического анализа известно, что при n стремящемся к бесконечности lim sn = exp(x)
//выясните, насколько 5 - й и 10 - й члены последовательности таких сумм отличаются от exp(x)
#include <stdio.h>
#pragma warning(disable : 4996)
#include <math.h>
#include <locale.h>

double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i; // вычисляем факториал
    }
    return result;
}

double exp_approximation(double x, int terms) {
    double sum = 0.0;
    for (int n = 0; n < terms; n++) {
        sum += pow(x, n) / factorial(n); // суммируем члены ряда
    }
    return sum;
}

int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    double x;

    // Запрашиваем у пользователя ввод значения x
    printf("Введите значение x: ");
    scanf("%lf", &x);

    // Вычисляем значения для 5-го и 10-го членов
    double exp_5 = exp_approximation(x, 6); // сумма до n=5 (включительно)
    double exp_10 = exp_approximation(x, 11); // сумма до n=10 (включительно)
    double exact_exp = exp(x); // точное значение exp(x)

    // Вычисляем разницу
    double diff_5 = fabs(exp_5 - exact_exp);
    double diff_10 = fabs(exp_10 - exact_exp);

    // Выводим результаты
    printf("При x = %.2f:\n", x);
    printf("Сумма до 5-го члена: %.6f\n", exp_5);
    printf("Сумма до 10-го члена: %.6f\n", exp_10);
    printf("Точное значение exp(x): %.6f\n", exact_exp);
    printf("Разница для 5-го члена: %.6f\n", diff_5);
    printf("Разница для 10-го члена: %.6f\n", diff_10);
    return 0;
}