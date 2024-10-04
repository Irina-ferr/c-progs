//Напишите программу, которая запрашивает значение x, а затем выводит значение
//следующей функции от x :
//sign(x) = 1, если x > 0
//sign(x) = 0, если x = 0
//sign(x) = -1, если x < 0
#pragma warning(disable : 4996)

#include <stdio.h>
#include <locale.h>
int sign(int x) {
    if (x > 0) {
        return 1;   // возвращает 1, если x больше 0
    }
    else if (x == 0) {
        return 0;   // возвращает 0, если x равно 0
    }
    else {
        return -1;  // возвращает -1, если x меньше 0
    }
}


int main() {
    char* locale = setlocale(LC_ALL, "RUS");
    int x;

    // запрашиваем у пользователя ввод значения x
    printf("Введите значение x: ");
    scanf("%d", &x);

    // выводим результат функции sign(x)
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}
