//Выведите имя в углах экрана
#include <stdio.h>
#include <string.h>

int main() {
    const char* name = "IRINA";

    // получаем ширину консоли
    int consoleWidth = 80; 
    int consoleHeight = 20; 

    // печатаем имя в углах консоли
    printf("%-*s\n", consoleWidth, name); // верхний левый угол
    printf("%*s\n", consoleWidth - strlen(name), name); // верхний правый угол

    // печатаем пустые строки до нижнего края
    for (int i = 1; i < consoleHeight - 1; i++) {
        printf("\n");
    }

    printf("%-*s\n", consoleWidth, name); // нижний левый угол
    printf("%*s\n", consoleWidth - strlen(name), name); // нижний правый угол

    return 0;
}
