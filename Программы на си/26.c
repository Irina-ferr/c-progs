//Выведите имя в углах экрана
#include <stdio.h>
#include <string.h>

int main() {
    const char* name = "IRINA";

    // Получаем ширину консоли (можно задать вручную)
    int consoleWidth = 80; // Задайте нужную ширину консоли
    int consoleHeight = 20; // Задайте нужную высоту консоли

    // Печатаем имя в углах консоли
    printf("%-*s\n", consoleWidth, name); // Верхний левый угол
    printf("%*s\n", consoleWidth - strlen(name), name); // Верхний правый угол

    // Печатаем пустые строки до нижнего края
    for (int i = 1; i < consoleHeight - 1; i++) {
        printf("\n");
    }

    printf("%-*s\n", consoleWidth, name); // Нижний левый угол
    printf("%*s\n", consoleWidth - strlen(name), name); // Нижний правый угол

    return 0;
}
