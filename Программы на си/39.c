///*ќтсортируйте элементы массива методом "пузырьковой" сортировки по
//возрастанию*/
//#include <stdio.h>
//#pragma warning(disable : 4996)
//#define SIZE 10
//#include <locale.h>
//void bubbleSort(signed char array[], int size) {
//    // переменна€ дл€ хранени€ временного значени€
//    signed char temp;
//
//    // цикл дл€ прохода по всем элементам массива
//    for (int i = 0; i < size - 1; i++) {
//        // цикл дл€ сравнени€ соседних элементов
//        for (int j = 0; j < size - i - 1; j++) {
//            // ссли текущий элемент больше следующего, мен€ем их
//            if (array[j] > array[j + 1]) {
//                temp = array[j];
//                array[j] = array[j + 1];
//                array[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main() 
//{
//        setlocale(LC_ALL, "RUS");
//
//    signed char arr[SIZE]; // объ€вление массива
//    int size = SIZE; // определ€ем размер массива
//
//    //ввод массива
//    printf("¬ведите %d целых чисел (от -128 до 127):\n", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("arr[%d]: ", i);
//        scanf("%hhd", &arr[i]); // используем %hhd дл€ чтени€ signed char
//    }
//        // выводим массив до сортировки
//        printf("ћассив до сортировки: ");
//        for (int i = 0; i < size; i++) {
//            printf("%d ", arr[i]);
//        }
//        printf("\n");
//
//        // сортируем массив
//        bubbleSort(arr, size);
//
//        // выводим массив после сортировки
//        printf("ћассив после сортировки: ");
//        for (int i = 0; i < size; i++) {
//            printf("%d ", arr[i]);
//        }
//        printf("\n");
//
//        return 0;
//    }
