#include <locale.h>
#include <stdio.h>
#pragma warning(disable : 4996)
#define SIZE 10


int main() {
    setlocale(LC_ALL, "RUS");
    signed char arr[SIZE]; // объявление массива

     //Ввод массива
    printf("Введите %d целых чисел (от -128 до 127):\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d]: ", i);
        scanf("%hhd", &arr[i]); // используем %hhd для чтения signed char
    }

     //Проверка на упорядоченность по убыванию
    int isSortedDescending = 1; // флаг упорядоченности

    for (int i = 0; i < SIZE - 1; i++) {
        if (arr[i] < arr[i + 1]) { // если текущий элемент меньше следующего
            isSortedDescending = 0; // устанавливаем флаг в 0
            break; // прерываем цикл, так как порядок нарушен
        }
    }

     //Вывод результата
    if (isSortedDescending) {
        printf("Элементы массива упорядочены по убыванию.\n");
    }
    else {
        printf("Элементы массива не упорядочены по убыванию\n");
    }

    return 0;
}
