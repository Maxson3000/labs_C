#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "lab4.h"

int main() {
    double a, b, c;

    // Считываем 3 числа. Проверка "== 3" гарантирует, что пользователь ввел именно числа, а не буквы
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        // Взаимодействие с модулем: передаем значения a, b, c в функцию valid
        if (valid(a, b, c)) {
            // Если valid вернула 1 (true), вызываем расчеты и выводим результат
            printf("P = %.2f\n", get_p(a, b, c));
            printf("S = %.2f\n", get_s(a, b, c));
        }
        else {
            // Если треугольник невозможен
            printf("invalid");
        }
    }
    return 0;
}