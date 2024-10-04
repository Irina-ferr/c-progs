////Если элементы меньше заданного числа, замените их этим числом.
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
//    signed char threshold; // переменная для хранения заданного числа
//
//    // ввод массива
//    printf("Введите %d целых чисел (от -128 до 127):\n", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("arr[%d]: ", i);
//        scanf("%hhd", &arr[i]); // используем %hhd для чтения signed char
//    }
//
//    // ввод заданного числа
//    printf("Введите число, на которое будут заменены элементы массива, меньше которого:\n");
//    scanf("%hhd", &threshold); // используем %hhd для чтения signed char
//
//    // замена элементов массива
//    for (int i = 0; i < SIZE; i++) {
//        if (arr[i] < threshold) {
//            arr[i] = threshold; // замена элемента на threshold, если он меньше
//        }
//    }
//
//    // вывод измененного массива
//    printf("Измененный массив:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
