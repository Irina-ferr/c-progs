//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#pragma warning(disable : 4996)
//
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void forward(int* arr, int index) {
//    if (arr[index] > arr[index + 1]) {
//        swap(&arr[index], &arr[index + 1]);
//    }
//}
//
//void backward(int* arr, int index) {
//    if (arr[index] < arr[index + 1]) {
//        swap(&arr[index], &arr[index + 1]);
//    }
//}
//
//void bubble_sort(int* arr, int size, void (*compare)(int*, int)) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - 1 - i; j++) {
//            compare(arr, j);
//        }
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//    int n;
//    char filename[100];
//    char order;
//
//    // ввод данных от пользователя
//    printf("Введите количество элементов массива: ");
//    scanf("%d", &n);
//
//    // динамическое выделение памяти для массива
//    int* arr = (int*)malloc(n * sizeof(int));
//    if (arr == NULL) {
//        fprintf(stderr, "Ошибка выделения памяти.\n");
//        return 1;
//    }
//
//    // ввод имени файла
//    printf("Введите имя файла: ");
//    scanf("%s", filename);
//
//    // чстение данных из файла
//    FILE* file = fopen(filename, "rb");
//    if (file == NULL) {
//        fprintf(stderr, "Ошибка открытия файла.\n");
//        free(arr);
//        return 1;
//    }
//
//    fread(arr, sizeof(int), n, file);
//    fclose(file);
//
//    // ввод порядка сортировки
//    printf("Введите 'F' для сортировки по возрастанию или 'B' для сортировки по убыванию: ");
//    scanf(" %c", &order);
//
//    // вывод исходного массива
//    printf("\nИсходный массив:\n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    // сортировка
//    if (order == 'F' || order == 'f') {
//        bubble_sort(arr, n, forward);
//    }
//    else if (order == 'B' || order == 'b') {
//        bubble_sort(arr, n, backward);
//    }
//    else {
//        fprintf(stderr, "Некорректный ввод порядка сортировки.\n");
//        free(arr);
//        return 1;
//    }
//
//    // вывод исходного и отсортированного массивов по индексам
//    printf("\n\nСравнение исходного и отсортированного массивов:\n");
//
//    // создаем копию исходного массива для сравнения
//    int* original_arr = (int*)malloc(n * sizeof(int));
//    if (original_arr == NULL) {
//        fprintf(stderr, "Ошибка выделения памяти.\n");
//        free(arr);
//        return 1;
//    }
//
//    for (int i = 0; i < n; i++) {
//        original_arr[i] = arr[i]; // копируем значения
//    }
//
//    for (int i = 0; i < n; i++) {
//        printf("Индекс %d: Исходный = %d, Отсортированный = %d\n", i, original_arr[i], arr[i]);
//    }
//
//    // освобождение памяти
//    free(original_arr);
//    free(arr);
//
//    return 0;
//}
