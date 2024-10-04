//Создайте программу, проверяющую есть ли в целочисленном массиве хотя бы один
//нечетный элемент.

#include <locale.h>
#include <stdio.h>
#define SIZE 10 // размер
#pragma warning(disable : 4996)

int main() {
    setlocale(LC_ALL, "RUS");
    signed char arr[SIZE]; // объявление массива
    int hasOdd = 0; // флаг для проверки нечётного элемента

    // ввод массива
    printf("Введите %d целых чисел (от -128 до 127):\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d]: ", i);
        scanf("%hhd", &arr[i]); // Используем %hhd для чтения signed char
    }

    // проверка на нечётный элемент
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0) { // если элемент нечётный
            hasOdd = 1; // устанавливаем флаг
            break; // прерываем цикл, если нечётный
        }
    }

    // Вывод результата
    if (hasOdd) {
        printf("В массиве есть хотя бы один нечётный элемент.\n");
    }
    else {
        printf("В массиве нет нечётных элементов.\n");
    }

    return 0;
}

