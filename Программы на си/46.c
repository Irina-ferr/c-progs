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
//    // ввод позиции для вставки и нового элемента
//    int position;
//    signed char newElement;
//
//    printf("Введите позицию для вставки (0-%d): ", SIZE - 1);
//    scanf("%d", &position);
//
//    // проверка корректности введенной позиции
//    if (position < 0 || position >= SIZE) {
//        printf("Ошибка: некорректная позиция.\n");
//        return 1;
//    }
//
//    printf("Введите новый элемент: ");
//    scanf("%hhd", &newElement);
//
//    // сдвиг элементов вправо
//    for (int i = size - 1; i > position; i--) {
//        arr[i] = arr[i - 1];
//    }
//
//    // вставка нового элемента
//    arr[position] = newElement;
//
//    // вывод измененного массива
//    printf("Массив после вставки элемента:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
