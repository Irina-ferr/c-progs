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
//    // вывод исходного массива
//    printf("Исходный массив:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // циклическая перестановка элементов массива
//    signed char lastElement = arr[SIZE - 1]; // сохраняем последний элемент
//    for (int i = SIZE - 1; i > 0; i--) {
//        arr[i] = arr[i - 1]; // сдвигаем элементы вправо
//    }
//    arr[0] = lastElement; // ставим последний элемент на первое место
//
//    // вывод измененного массива
//    printf("Массив после циклической перестановки:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
