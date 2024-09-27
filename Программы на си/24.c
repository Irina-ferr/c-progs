//Напечатайте таблицу умножения на 5, в стиле :
//1 x 5 = 5,
//2 x 5 = 10,
//...
#include <stdio.h>

int main() {
    int multiplier = 5; // число, на которое будем умножать

    // цикл от 1 до 10 для вывода таблицы умножения
    for (int i = 1; i <= 10; i++) {
        int result = i * multiplier; // вычисление результата
        printf("%d x %d = %d\n", i, multiplier, result); // вывод в нужном формате
    }

    return 0;
}
