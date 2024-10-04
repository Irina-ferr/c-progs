//n Ц целое число. «апишите выражение, позвол€ющее узнать его последнюю цифру. 
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    int n; // введенное число
    int last_digit; // последн€€ цифра

    // ввод числа
    printf("¬ведите целое число: ");
    scanf("%d", &n);

    // находим последнюю цифру
    last_digit = n % 10;

    // результат
    printf("ѕоследн€€ цифра числа %d: %d\n", n, last_digit);

    return 0;
}
