////Найдите максимальный и минимальный элементы массива.
//#include <stdio.h>
//#include <limits.h> // Для использования CHAR_MIN и CHAR_MAX
//#pragma warning(disable : 4996)
//#define SIZE 10
//#include <locale.h>
//
//
//int main() {
//    // Объявляем и инициализируем массив signed char
//   
//    setlocale(LC_ALL, "RUS");
//    signed char arr[SIZE]; // объявление массива
//    int size = SIZE; // Определяем размер массива
//    //Ввод массива
//    printf("Введите %d целых чисел (от -128 до 127):\n", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("arr[%d]: ", i);
//        scanf("%hhd", &arr[i]); // используем %hhd для чтения signed char
//    }
//    // Инициализируем min и max значениями из массива
//    signed char min = CHAR_MAX; // Начальное значение для min
//    signed char max = CHAR_MIN; // Начальное значение для max
//
//    // Проходим по массиву
//    for (int i = 0; i < size; i++) {
//        if (arr[i] < min) {
//            min = arr[i]; // Обновляем min
//        }
//        if (arr[i] > max) {
//            max = arr[i]; // Обновляем max
//        }
//    }
//
//    // Выводим результаты
//    printf("Минимальный элемент: %d\n", min);
//    printf("Максимальный элемент: %d\n", max);
//
//    return 0;
//}
