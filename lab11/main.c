#include <stdio.h>
#include "mymath.h"

int main() {
    printf("Summa: %.2f\n", sum(4, 1.0, 2.0, 3.0, 4.0));
    printf("Max: %.2f\n", max(4, 1.0, 2.0, 3.0, 4.0));
    printf("Min: %.2f\n", min(4, 1.0, 2.0, 3.0, 4.0));
    printf("Srednee: %.2f\n", avg(4, 1.0, 2.0, 3.0, 4.0));
    return 0;
}