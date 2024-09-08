//В доме 9 этажей, на каждом этаже одного подъезда по 4 квартиры. В каком подъезде и на каком этаже находится n-я квартира? 
#include <stdio.h>
#include <locale.h>

int main() {
    char* locale = setlocale(LC_ALL, "rus");

    int n; // номер квартиры
    int kv = 4; // количество квартир на этаже
    int et_v_pod = 9; // количество этажей в подъезде
    int kv_v_pod = kv * et_v_pod; // общее количество квартир в подъезде

    printf("Введите номер квартиры: ");
    scanf("%d", &n);

   
    if (n <= 0) {
        printf("Ошибка: номер квартиры должен быть положительным.\n");
        return 1;
    }

    // номер подъезда
    int entrance_number = (n - 1) / kv_v_pod + 1;

    // номер квартиры в подъезде
    int apartment_in_entrance = (n - 1) % kv_v_pod;

    // этаж
    int floor_number = apartment_in_entrance / kv + 1;

    // номер квартиры на этаже
    int apartment_on_floor = apartment_in_entrance % kv + 1;

    // результат
    printf("Квартира номер %d находится в подъезде %d, на этаже %d (квартира %d).\n", n, entrance_number, floor_number, apartment_on_floor);

    return 0;
}
