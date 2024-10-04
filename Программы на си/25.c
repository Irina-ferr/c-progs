//Напечатайте в столбик нечетные числа от 3 до 25.
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    // начинаем с 3 и идем до 25 с шагом 2, чтобы получить только нечетные числа
    for (int i = 3; i <= 25; i += 2) {
        printf("%d\n", i); // выводим текущее нечетное число
    }

    return 0;
}
