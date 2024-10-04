////Расположите элементы массива в обратном порядке.
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
//    // Реверсирование массива
//    for (int i = 0; i < SIZE / 2; i++) {
//        signed char temp = arr[i]; // временная переменная для хранения текущего элемента
//        arr[i] = arr[SIZE - 1 - i]; // замена текущего элемента на элемент с противоположного конца
//        arr[SIZE - 1 - i] = temp; // замена элемента с противоположного конца на текущий
//    }
//
//    // Печать массива после реверсирования
//    printf("Массив в обратном порядке:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
