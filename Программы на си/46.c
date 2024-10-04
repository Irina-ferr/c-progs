////Вставьте дополнительный элемент в заданное место массива.Чтобы освободить это
////место, все элементы, начиная с него, сдвиньте вправо.Последний элемент теряется.
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
//    // Ввод позиции для вставки и нового элемента
//    int position;
//    signed char newElement;
//
//    printf("Введите позицию для вставки (0-%d): ", SIZE - 1);
//    scanf("%d", &position);
//
//    // Проверка корректности введенной позиции
//    if (position < 0 || position >= SIZE) {
//        printf("Ошибка: некорректная позиция.\n");
//        return 1;
//    }
//
//    printf("Введите новый элемент: ");
//    scanf("%hhd", &newElement);
//
//    // Сдвиг элементов вправо
//    for (int i = size - 1; i > position; i--) {
//        arr[i] = arr[i - 1];
//    }
//
//    // Вставка нового элемента
//    arr[position] = newElement;
//
//    // Вывод измененного массива
//    printf("Массив после вставки элемента:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
