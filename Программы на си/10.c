// n и m – целые числа. Запишите выражение, которое давало бы 0, если n кратно m, и 1, если не кратно. 
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    int n, m; // переменные для хранения чисел
    int result; // для хранения результата

    // ввод двух целых чисел
    printf("Введите два целых числа n и m: ");
    scanf("%d %d", &n, &m);

    // m не равно 0?
    if (m == 0) {
        printf("Ошибка: Деление на ноль невозможно.\n");
        return 1; // 
    }

    // 0 если n кратно m, 1 если не кратно
    result = (n % m == 0) ? 0 : 1;

    // результат
    printf("Результат: %d\n", result);

    return 0;
}
