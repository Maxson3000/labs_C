#include <stdio.h>

int main() {
    char expr[256];
    printf("Введите выражение: ");
    fgets(expr, sizeof(expr), stdin);

    double result = 0.0;
    double current = 0.0;
    char op = '+';
    int i = 0;
    int has_dot = 0;
    double dot_div = 1.0;

    while (expr[i] != '\0' && expr[i] != '\n') {
        if (expr[i] == ' ') {
            i++;
            continue;
        }

        if (expr[i] == '+' || expr[i] == '-') {
            if (op == '+') result += current;
            else result -= current;

            op = expr[i];
            current = 0.0;
            has_dot = 0;
            dot_div = 1.0;
            i++;
            continue;
        }

        if (expr[i] == '.') {
            has_dot = 1;
            i++;
            continue;
        }

        if (expr[i] >= '0' && expr[i] <= '9') {
            int digit = expr[i] - '0';

            if (!has_dot) {
                current = current * 10.0 + digit;
            } else {
                dot_div *= 10.0;
                current = current + (double)digit / dot_div;
            }
            i++;
            continue;
        }

        i++;
    }

    if (op == '+') result += current;
    else result -= current;

    printf("Результат: %g\n", result);
    return 0;
}