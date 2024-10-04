//Напишите программу, вычисляющую сумму степеней от 0 до 10 числа x
#include <stdio.h>
#include <math.h> 
#include <locale.h>
#pragma warning(disable : 4996)
int main() {
    setlocale(LC_ALL, "rus");
    double x;
    double sum = 0.0;

    
    printf("Введите число x: ");
    scanf("%lf", &x);

    // Вычисляем сумму степеней от 0 до 10
    for (int i = 0; i <= 10; i++) {
        sum += pow(x, i); 
    }

    // Выводим результат
    printf("Сумма степеней числа %.2f от 0 до 10 равна: %.2f\n", x, sum);

    return 0; 
}
