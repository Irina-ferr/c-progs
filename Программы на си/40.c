////Поменяйте местами первый и последний элементы массива.
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
//    //ввод массива
//    printf("Введите %d целых чисел (от -128 до 127):\n", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("arr[%d]: ", i);
//        scanf("%hhd", &arr[i]); // используем %hhd для чтения signed char
//    }
//    
//    // Печать массива до замены
//        printf("Массив до замены:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // Меняем местами первый и последний элементы
//    signed char temp = arr[0]; // сохраняем первый элемент во временной переменной
//    arr[0] = arr[SIZE - 1];     // присваиваем последний элемент первому
//    arr[SIZE - 1] = temp;       // присваиваем сохранённый первый элемент последнему
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
