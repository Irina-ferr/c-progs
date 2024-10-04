//Пусть дано трехзначное целое число x. Составьте выражения, которые позволят вычислить первую, вторую и третью цифру этого числа. 
#include <stdio.h>
#pragma warning(disable : 4996)

#include <locale.h>
int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    int x; // трехзначное целое число
    int first_digit, second_digit, third_digit;

    // ввод трехзначного числа
    printf("Введите трехзначное целое число: ");
    scanf("%d", &x);

    // число является трехзначным?
    if (x < 100 || x > 999) {
        printf("Ошибка: Введите трехзначное число.\n");
        return 1; 
    }

    // Выделяем цифры
    first_digit = x / 100;         // 1 цифра
    second_digit = (x / 10) % 10;  // 2 цифра
    third_digit = x % 10;          // 3 цифра

    // результат
    printf("Первая цифра: %d\n", first_digit);
    printf("Вторая цифра: %d\n", second_digit);
    printf("Третья цифра: %d\n", third_digit);

    return 0;
}
