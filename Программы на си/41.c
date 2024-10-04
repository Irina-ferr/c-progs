////Замените все элементы с индексами в диапазоне[a, b] нулями.
//
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
//    // Ввод диапазона [a, b]
//    int a, b;
//    printf("Введите диапазон [a, b] для замены элементов на нули:\n");
//    printf("a: ");
//    scanf("%d", &a);
//    printf("b: ");
//    scanf("%d", &b);
//
//    // Проверка корректности диапазона
//    if (a < 0 || b >= SIZE || a > b) {
//        printf("Некорректный диапазон. Пожалуйста, убедитесь, что 0 <= a <= b < %d.\n", SIZE);
//        return 1; // Завершение программы с ошибкой
//    }
//
//    // Замена элементов в диапазоне [a, b] на нули
//    for (int i = a; i <= b; i++) {
//        arr[i] = 0;
//    }
//
//    // Печать массива после замены
//    printf("Массив после замены:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
