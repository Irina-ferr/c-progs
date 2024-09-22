//Напишите программу, возводящую число в целую степень без использования
//специализированных функций, описанных в “math.h”.Число и степень запрашивайте
//у пользователя.
#include <stdio.h>
#include <locale.h>

int main() {
    char* locale = setlocale(LC_ALL, "rus");

    double base;
    int exponent;
    double result = 1.0; // Переменная для хранения результата

    // Запрос числа и степени у пользователя
    

    printf("Введите число (основание): ");
    #pragma warning(suppress : 4996)
    scanf("%lf", &base);
    printf("Введите целую степень: ");
    #pragma warning(suppress : 4996)
    scanf("%d", &exponent);

    // Обработка отрицательной степени
    if (exponent < 0) {
        // Для отрицательной степени инвертируем основание и делаем степень положительной
        exponent = -exponent;
        for (int i = 0; i < exponent; i++) {
            result *= base; // Умножаем результат на основание
        }
        result = 1.0 / result; // Инвертируем результат
    }
    else {
        // Для положительной степени просто умножаем основание
        for (int i = 0; i < exponent; i++) {
            result *= base; // Умножаем результат на основание
        }
    }

    // Вывод результата
    printf("%.2lf в степени %d равно %.5lf\n", base, exponent, result);

    return 0;
}
