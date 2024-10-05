//Прочитайте значения 2 каналов данных, записанных с чередованием, из файла
//“signal_t.dat”, созданного при выполнении предыдущего задания.Сохранить
//первый канал(номер строки) в столбец в текстовый файл, а второй канал
//(последовательность прямоугольных импульсов) - в столбец другой текстовый файл.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_LINES 100 // максимальное количество строк

int main() {
    setlocale(LC_ALL, "RUS");
    FILE* inputFile, * outputFile1, * outputFile2;
    char signal1[MAX_LINES]; // массив для первого канала
    char signal2[MAX_LINES]; // массив для второго канала
    int count = 0;

    // открываем бинарный файл signal_t.dat для чтения
    inputFile = fopen("signal_t.dat", "rb");
    if (inputFile == NULL) {
        perror("Ошибка открытия файла signal_t.dat");
        return EXIT_FAILURE;
    }

    // считываем данные из бинарного файла
    while (fread(&signal1[count], sizeof(char), 1, inputFile) == 1 &&
        fread(&signal2[count], sizeof(char), 1, inputFile) == 1) {
        count++;
        if (count >= MAX_LINES) {
            break; // предотвращаем переполнение
        }
    }
    fclose(inputFile);

    // открываем файлы для записи
    outputFile1 = fopen("channel1.txt", "w");
    if (outputFile1 == NULL) {
        perror("Ошибка открытия файла channel1.txt");
        return EXIT_FAILURE;
    }

    outputFile2 = fopen("channel2.txt", "w");
    if (outputFile2 == NULL) {
        perror("Ошибка открытия файла channel2.txt");
        fclose(outputFile1);
        return EXIT_FAILURE;
    }

    // записываем данные в текстовые файлы
    for (int i = 0; i < count; i++) {
        fprintf(outputFile1, "%c\n", signal1[i]); // записываем первый канал
        fprintf(outputFile2, "%c\n", signal2[i]); // записываем второй канал
    }

    // закрываем файлы
    fclose(outputFile1);
    fclose(outputFile2);

    printf("Данные успешно записаны в channel1.txt и channel2.txt.\n");

    return EXIT_SUCCESS;
}
