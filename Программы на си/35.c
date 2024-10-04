////Объявите 3 массива, содержащих по 5 элементов целого типа : A, B и С.Массив A
////заполните значениями, введенными с клавиатуры, массив B – значениями, равными
////индексу элемента, массив С – случайными числами.Выведете массивы на экран в 3
////строки : массив A, под ним массив B, под ним массив С.//
//#include <stdlib.h>
//#include <time.h>
//#include <locale.h>
//#include <stdio.h>
//#define SIZE 5
//#pragma warning(disable : 4996)
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//    signed char A[SIZE]; // массив A
//    signed char B[SIZE]; // массив B
//    signed char C[SIZE]; // массив C
//
//    // инициализация генератора случайных чисел
//    srand(time(NULL));
//
//    // заполнение A значениями с клавиатуры
//    printf("Введите %d целых чисел для массива A (от -128 до 127):\n", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("A[%d]: ", i);
//        scanf("%hhd", &A[i]); // Используем %hhd для чтения signed char
//    }
//
//    // заполнение B значениями, равными индексу элемента
//    for (int i = 0; i < SIZE; i++) {
//        B[i] = (signed char)i; // Приводим индекс к signed char
//    }
//
//    // заполнение C случайными числами
//    for (int i = 0; i < SIZE; i++) {
//        C[i] = (signed char)(rand() % 256 - 128); // Случайные числа от -128 до 127
//    }
//
//    // вывод массивов на экран
//    printf("\nМассив A:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", A[i]);
//    }
//
//    printf("\n\nМассив B:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", B[i]);
//    }
//
//    printf("\n\nМассив C:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", C[i]);
//    }
//
//    printf("\n");
//
//    return 0;
//}
//
