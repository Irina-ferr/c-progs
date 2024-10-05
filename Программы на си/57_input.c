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
//    // ���� ������ �� ������������
//    printf("������� ���������� ��������� �������: ");
//    scanf("%d", &n);
//
//    // ������������ ��������� ������ ��� �������
//    int* arr = (int*)malloc(n * sizeof(int));
//    if (arr == NULL) {
//        fprintf(stderr, "������ ��������� ������.\n");
//        return 1;
//    }
//
//    // ���� ����� �����
//    printf("������� ��� �����: ");
//    scanf("%s", filename);
//
//    // ������� ������ �� �����
//    FILE* file = fopen(filename, "rb");
//    if (file == NULL) {
//        fprintf(stderr, "������ �������� �����.\n");
//        free(arr);
//        return 1;
//    }
//
//    fread(arr, sizeof(int), n, file);
//    fclose(file);
//
//    // ���� ������� ����������
//    printf("������� 'F' ��� ���������� �� ����������� ��� 'B' ��� ���������� �� ��������: ");
//    scanf(" %c", &order);
//
//    // ����� ��������� �������
//    printf("\n�������� ������:\n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    // ����������
//    if (order == 'F' || order == 'f') {
//        bubble_sort(arr, n, forward);
//    }
//    else if (order == 'B' || order == 'b') {
//        bubble_sort(arr, n, backward);
//    }
//    else {
//        fprintf(stderr, "������������ ���� ������� ����������.\n");
//        free(arr);
//        return 1;
//    }
//
//    // ����� ��������� � ���������������� �������� �� ��������
//    printf("\n\n��������� ��������� � ���������������� ��������:\n");
//
//    // ������� ����� ��������� ������� ��� ���������
//    int* original_arr = (int*)malloc(n * sizeof(int));
//    if (original_arr == NULL) {
//        fprintf(stderr, "������ ��������� ������.\n");
//        free(arr);
//        return 1;
//    }
//
//    for (int i = 0; i < n; i++) {
//        original_arr[i] = arr[i]; // �������� ��������
//    }
//
//    for (int i = 0; i < n; i++) {
//        printf("������ %d: �������� = %d, ��������������� = %d\n", i, original_arr[i], arr[i]);
//    }
//
//    // ������������ ������
//    free(original_arr);
//    free(arr);
//
//    return 0;
//}
