////Совершите циклическую перестановку элементов массива : сдвиньте все элементы
////вправо, а последний поставьте на первое место.
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
//    int size = SIZE; // определяем размер массива
//
//    // ввод массива
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
//    // Циклическая перестановка элементов массива
//    signed char lastElement = arr[SIZE - 1]; // Сохраняем последний элемент
//    for (int i = SIZE - 1; i > 0; i--) {
//        arr[i] = arr[i - 1]; // Сдвигаем элементы вправо
//    }
//    arr[0] = lastElement; // Ставим последний элемент на первое место
//
//    // Вывод измененного массива
//    printf("Массив после циклической перестановки:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
