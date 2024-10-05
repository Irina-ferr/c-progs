////Прочитать данные из файла “signal.txt”, созданного при выполнении предыдущего
////задания.Все значения из первого столбца уменьшить на 1, все значения из второго
////столбца умножить на 2. Сохранить новые значения в 2 столбца в текстовом файле
////“signal2.txt”
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//int main() {
//    setlocale(LC_ALL, "RUS");
//    FILE* inputFile;
//    FILE* outputFile;
//    int firstColumn;
//    int secondColumn;
//
//    // Открываем файл signal.txt для чтения
//    inputFile = fopen("signal.txt", "r");
//    if (inputFile == NULL) {
//        perror("Ошибка открытия файла signal.txt");
//        return EXIT_FAILURE;
//    }
//
//    // Открываем файл signal2.txt для записи
//    outputFile = fopen("signal2.txt", "w");
//    if (outputFile == NULL) {
//        perror("Ошибка открытия файла signal2.txt");
//        fclose(inputFile); // Закрываем входной файл перед выходом
//        return EXIT_FAILURE;
//    }
//
//    // Читаем данные из файла и обрабатываем их
//    while (fscanf(inputFile, "%d %d", &firstColumn, &secondColumn) == 2) {
//        firstColumn -= 1; // Уменьшаем значение первого столбца на 1
//        secondColumn *= 2; // Умножаем значение второго столбца на 2
//
//        // Записываем новые значения в выходной файл
//        fprintf(outputFile, "%d %d\n", firstColumn, secondColumn);
//    }
//
//    // Закрываем файлы
//    fclose(inputFile);
//    fclose(outputFile);
//
//    printf("Данные успешно обработаны и сохранены в signal2.txt.\n");
//
//    return EXIT_SUCCESS;
//}
