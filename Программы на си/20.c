//Напишите программу, которая запрашивает значения x, y, z, а затем выводит
//значение следующих функций max(x, min(y, z)), а также min(min(x, y), z).
#include <stdio.h>

// функция для нахождения максимума двух чисел
int max(int a, int b) {
    return (a > b) ? a : b;
}

// функция для нахождения минимума двух чисел
int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y, z;

    // запрашиваем у пользователя ввод значений x, y и z
    printf("Введите значение x: ");
    scanf("%d", &x);
    printf("Введите значение y: ");
    scanf("%d", &y);
    printf("Введите значение z: ");
    scanf("%d", &z);

    // вычисляем min(y, z)
    int min_yz = min(y, z);

    // вычисляем max(x, min(y, z))
    int result_max = max(x, min_yz);

    // вычисляем min(min(x, y), z)
    int min_xy = min(x, y);
    int result_min = min(min_xy, z);

    // выводим результаты
    printf("max(x, min(y, z)) = max(%d, min(%d, %d)) = %d\n", x, y, z, result_max);
    printf("min(min(x, y), z) = min(min(%d, %d), %d) = %d\n", x, y, z, result_min);

    return 0;
}
