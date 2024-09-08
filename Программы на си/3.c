//—колько нечетных чисел на отрезке(a, b), a и b Ц целые ?
#include <stdio.h>
#include <locale.h>

int count_odd_numbers(int a, int b) {

    a++;
    b--;

    if (a > b) {
        return 0;
    }

    // (количество чисел в диапазоне + 1) / 2
    int count = (b - a + 1 ) / 2;

    return count;
}

int main() {
    char* locale = setlocale(LC_ALL, "rus");

    int a, b;

    printf("¬ведите 2 целых числа (a и b): ");
    scanf("%d %d", &a, &b);

    
    if (a >= b) {
        printf("ќшибка: a должно быть меньше b.\n");
        return 1;
    }

    int odd_count = count_odd_numbers(a, b);
    printf(" оличество нечетных чисел на отрезке (%d, %d): %d\n", a, b, odd_count);

    return 0;
}
