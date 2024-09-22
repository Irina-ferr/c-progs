//Напишите программу вычисления факториала введенного пользователем числа
#include <stdio.h>
#include <locale.h>

// Функция для вычисления факториала
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Факториал 0 и 1 равен 1
    }
    unsigned long long result = 1; // Переменная для хранения результата
    for (int i = 2; i <= n; i++) {
        result *= i; // Умножаем результат на текущее значение i
    }
    return result;
}

int main() {
    char* locale = setlocale(LC_ALL, "rus");

    int number;

    printf("Введите целое неотрицательное число: ");
    #pragma warning(suppress : 4996)
    scanf("%d", &number); // Считываем число от пользователя

    // Проверка на неотрицательность
    if (number < 0) {
        printf("Ошибка: факториал определен только для неотрицательных чисел.\n");
    }
    else {
        unsigned long long fact = factorial(number); // Вычисляем факториал
        printf("Факториал %d равен %llu\n", number, fact); // Выводим результат
    }

    return 0;
}
