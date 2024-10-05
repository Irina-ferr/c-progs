////ѕрочитать данные из файла Уsignal.txtФ, созданного при выполнении одного из
////предыдущих заданий.—охранить данные в типизированный файл Уsignal_t.datФ в
////виде последовательности значений типа char с чередованием, т.е.первый байт
////Уsignal_t.datФ будет содержать первое значение из первого столбца Уsignal.txtФ,
////второй байт Ц первое значение из второго столбца Уsignal.txtФ, третий байт Ц второе
////значение из первого столбца Уsignal.txtФ и т.д.Ёто типичный формат сохранени€
////данных приборов при проведении многоканальных измерений.—равните размеры
////файлов Уsignal.txtФ и Уsignal_t.datФ, содержащих одинаковую информацию в разных
////форматах.
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#define MAX_LINES 100 // максимальное количество строк
//int main() {
//    setlocale(LC_ALL, "RUS");
//    FILE* inputFile, * outputFile;
//    char signal1[MAX_LINES]; // массив дл€ первого столбца
//    char signal2[MAX_LINES]; // массив дл€ второго столбца
//    int count = 0;
//
//    // открываем файл signal.txt дл€ чтени€
//    inputFile = fopen("signal.txt", "r");
//    if (inputFile == NULL) {
//        perror("ќшибка открыти€ файла signal.txt");
//        return EXIT_FAILURE;
//    }
//
//    // считываем данные из файла
//    while (fscanf(inputFile, "%c %c\n", &signal1[count], &signal2[count]) == 2) {
//        count++;
//        if (count >= MAX_LINES) {
//            break; // ппредотвращаем переполнение массива
//        }
//    }
//    fclose(inputFile);
//
//    // открываем файл signal_t.dat дл€ записи в бинарном формате
//    outputFile = fopen("signal_t.dat", "wb");
//    if (outputFile == NULL) {
//        perror("ќшибка открыти€ файла signal_t.dat");
//        return EXIT_FAILURE;
//    }
//
//    // записываем данные в чередующемс€ пор€дке
//    for (int i = 0; i < count; i++) {
//        fwrite(&signal1[i], sizeof(char), 1, outputFile);
//        fwrite(&signal2[i], sizeof(char), 1, outputFile);
//    }
//    fclose(outputFile);
//
//    // сравниваем размеры файлов
//    long size_txt, size_dat;
//
//    inputFile = fopen("signal.txt", "rb");
//    fseek(inputFile, 0, SEEK_END);
//    size_txt = ftell(inputFile);
//    fclose(inputFile);
//
//    outputFile = fopen("signal_t.dat", "rb");
//    fseek(outputFile, 0, SEEK_END);
//    size_dat = ftell(outputFile);
//    fclose(outputFile);
//
//    printf("–азмер файла signal.txt: %ld байт\n", size_txt);
//    printf("–азмер файла signal_t.dat: %ld байт\n", size_dat);
//
//    return EXIT_SUCCESS;
//}