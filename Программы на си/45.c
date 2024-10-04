////Поменяйте местами элементы с четными и нечетными индексами.
//#include <stdio.h>
//#pragma warning(disable : 4996)
//#define SIZE 10
//#include <locale.h>
//
//int main()
//{
//    setlocale(LC_ALL, "RUS");
//
//    signed char arr[SIZE]; // объявление массива
//
//    // Ввод массива
//    printf("Введите %d целых чисел (от -128 до 127):\n", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("arr[%d]: ", i);
//        scanf("%hhd", &arr[i]); // используем %hhd для чтения signed char
//    }
//
//    // Вывод исходного массива
//    printf("Исходный массив:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // Поменять местами элементы с четными и нечетными индексами
//    for (int i = 0; i < SIZE - 1; i += 2) {
//        signed char temp = arr[i];      // Сохраняем элемент с четным индексом
//        arr[i] = arr[i + 1];            // Меняем местами с элементом с нечетным индексом
//        arr[i + 1] = temp;               // Восстанавливаем сохраненный элемент
//    }
//
//    // Вывод измененного массива
//    printf("Массив после обмена элементов:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
