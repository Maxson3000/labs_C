#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include<locale.h>

int main(int argc, char* argv[])
{
    ///лаба 1
    double a, b, c;
    int scanResult;

    printf("a, b, c:");
    while (1) {
        scanResult = scanf("%lf %lf %lf", &a, &b, &c);

        if (scanResult == 3) {
            break;
        }
        else {
            while (getchar() != '\n');
            printf("error ");
        }
    }

    double exponent = 2;
    double d = pow(b, exponent) - 4 * a * c;

    printf("d = %.2f\n", d);

    if (d < 0)
    {
        printf("sqrt no\n");
    }
    else if (d == 0)
    {
        double x = -b / (2 * a);
        printf("one sqrt: x = %0.2f\n", x);
    }
    else // d > 0
    {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}