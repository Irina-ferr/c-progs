////—генерировать текстовый файл Уsignal.txtФ, содержащий 2 столбца по 20 строк
////целочисленных значений.¬ первом столбце вывести номер строки, во втором Ц
////меандр с периодом 10, измен€ющийс€ в пределах от 1 до 5.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <locale.h>
//
//int main() {
//    setlocale(LC_ALL, "RUS");
//    FILE* file = fopen("signal.txt", "w"); // открываем файл дл€ записи
//    if (file == NULL) {
//        perror("ќшибка открыти€ файла");
//        return EXIT_FAILURE;
//    }
//
//    srand(time(NULL)); // инициализаци€ генератора случайных чисел
//
//    for (int i = 1; i <= 20; i++) {
//        int value;
//
//        // генерируем значение дл€ меандра с периодом 10
//        if (i % 10 < 5) {
//            value = (rand() % 5) + 1; // генераци€ от 1 до 5
//        }
//        else {
//            value = (rand() % 5) + 1; // генераци€ от 1 до 5
//        }
//
//        fprintf(file, "%d %d\n", i, value); // записываем номер строки и значение
//    }
//
//    fclose(file); // закрываем файл
//    printf("‘айл signal.txt успешно создан.\n");
//
//    return EXIT_SUCCESS;
//}
