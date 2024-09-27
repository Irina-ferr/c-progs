//Ќапишите программу, возвод€щую число в целую степень без использовани€
//специализированных функций, описанных в Уmath.hФ.„исло и степень запрашивайте
//у пользовател€.
#include <stdio.h>
#include <locale.h>

int main() {
    char* locale = setlocale(LC_ALL, "rus");

    double base;
    int exponent;
    double result = 1.0; // переменна€ дл€ хранени€ результата

    // запрос числа и степени у пользовател€
    

    printf("¬ведите число (основание): ");
    #pragma warning(suppress : 4996)
    scanf("%lf", &base);
    printf("¬ведите целую степень: ");
    #pragma warning(suppress : 4996)
    scanf("%d", &exponent);

    // обработка отрицательной степени
    if (exponent < 0) {
        // дл€ отрицательной степени инвертируем основание и делаем степень положительной
        exponent = -exponent;
        for (int i = 0; i < exponent; i++) {
            result *= base; // умножаем результат на основание
        }
        result = 1.0 / result; // инвертируем результат
    }
    else {
        // дл€ положительной степени просто умножаем основание
        for (int i = 0; i < exponent; i++) {
            result *= base; // умножаем результат на основание
        }
    }

    // вывод результата
    printf("%.2lf в степени %d равно %.5lf\n", base, exponent, result);

    return 0;
}
