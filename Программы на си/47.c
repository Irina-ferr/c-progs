//Рассчитайте среднее арифметическое, стандартное отклонение и дисперсию
//элементов массива.
#include <stdio.h>
#include <math.h> // Для функции sqrt
#pragma warning(disable : 4996)
#define SIZE 10
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    signed char arr[SIZE]; // объявление массива
    int size = SIZE; // определяем размер массива

    // ввод массива
    printf("Введите %d целых чисел (от -128 до 127):\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d]: ", i);
        scanf("%hhd", &arr[i]); // используем %hhd для чтения signed char
    }

    // Расчет среднего арифметического
    double sum = 0.0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    double mean = sum / size;

    // Расчет дисперсии
    double variance_sum = 0.0;
    for (int i = 0; i < SIZE; i++) {
        variance_sum += (arr[i] - mean) * (arr[i] - mean);
    }
    double variance = variance_sum / size;

    // Расчет стандартного отклонения
    double std_deviation = sqrt(variance);

    // Вывод результатов
    printf("Среднее арифметическое: %.2f\n", mean);
    printf("Дисперсия: %.2f\n", variance);
    printf("Стандартное отклонение: %.2f\n", std_deviation);

    return 0;
}
