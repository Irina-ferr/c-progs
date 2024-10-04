//—колько нечетных чисел на отрезке(a, b), a и b Ц целые ?
#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)
int count_odd_numbers(int a, int b) {

    if (a > b) {
        return 0;
    }
    a++;
    b--;
    int count=0;
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            count++;
        }

    }
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
