#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
int main() {
    int n;
    char op;
    double *m1, *m2, *res;
    scanf("%d", &n);
    m1 = (double*)malloc(n * n * sizeof(double));
    m2 = (double*)malloc(n * n * sizeof(double));
    for (int i = 0; i < n * n; i++)
        scanf("%lf", &m1[i]);
    
    for (int i = 0; i < n * n; i++)
        scanf("%lf", &m2[i]);
    scanf(" %c", &op);
    res = calculate_matrix(m1, m2, n, op);
    for (int i = 0; i < n * n; i++) {
        printf("%.2lf ", res[i]);
        if ((i + 1) % n == 0)
            printf("\n");
    }
    free(m1);
    free(m2);
    free(res);
    
    return 0;
}