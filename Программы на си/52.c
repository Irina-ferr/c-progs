////Оформите операции установки, сброса и проверки состояния n - го бита переменной
////x в виде параметрических макросов.
//#include <locale.h>
//#pragma warning(disable : 4996)
//#include <stdio.h>
//
//// макрос для установки n-го бита
//#define SET_BIT(x, n) ((x) | (1U << (n)))
//
//// макрос для сброса n-го бита
//#define CLEAR_BIT(x, n) ((x) & ~(1U << (n)))
//
//// макрос для проверки состояния n-го бита
//#define CHECK_BIT(x, n) (((x) >> (n)) & 1U)
//
//int main() {
//	setlocale(LC_ALL, "RUS");
//    unsigned char x = 0b00000000; // изначально все биты равны 0
//    int n;
//    int choice;
//
//    while (1) {
//        printf("\nТекущие биты: %02X\n", x);
//        printf("Выберите действие:\n");
//        printf("1. Установить бит\n");
//        printf("2. Сбросить бит\n");
//        printf("3. Проверить бит\n");
//        printf("4. Выход\n");
//        printf("Ваш выбор: ");
//        scanf("%d", &choice);
//
//        if (choice == 4) {
//            break; // выход из программы
//        }
//
//        printf("Ввдите номер бита (0-7): ");
//        scanf("%d", &n);
//
//        if (n < 0 || n > 7) {
//            printf("Ошибка: номер бита должен быть в диапазоне от 0 до 7.\n");
//            continue;
//        }
//
//        switch (choice) {
//        case 1:
//            x = SET_BIT(x, n);
//            printf("Бит %d установлен.\n", n);
//            break;
//        case 2:
//            x = CLEAR_BIT(x, n);
//            printf("Бит %d сброшен.\n", n);
//            break;
//        case 3:
//            if (CHECK_BIT(x, n)) {
//                printf("Бит %d установлен.\n", n);
//            }
//            else {
//                printf("Бит %d не установлен.\n", n);
//            }
//            break;
//        default:
//            printf("Ошибка: неверный выбор.\n");
//            break;
//        }
//    }
//
//    return 0;
//}