////Сколько полных минут и часов содержится в x секундах ?
#include <stdio.h>
#include <locale.h>

int main() {
    char* locale = setlocale(LC_ALL, "rus");
    int x; // количество секунд
    int hours, minutes, seconds;

    #pragma warning(disable : 4996)

    printf("Введите количество секунд: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("Ошибка: количество секунд не может быть отрицательным.\n");
        return 1;
    }

    // вычисляем количество часов
    hours = x / 3600; // 1 час = 3600 секунд

    // вычисляем оставшиеся секунды после часов
    seconds = x % 3600;

    // вчисляем количество полных минут из оставшихся секунд
    minutes = seconds / 60; // 1 минута = 60 секунд

    // оставшиеся секунды
    seconds = seconds % 60;

    // выводим результат
    printf("%d секунд = %d часов, %d минут и %d секунд\n", x, hours, minutes, seconds);

    return 0;
}
