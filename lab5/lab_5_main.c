
#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main() {
    int n;
    char op;
    
    scanf("%d", &n);
    
    double* matrix1 = (double*)malloc(n * n * sizeof(double));
    double* matrix2 = (double*)malloc(n * n * sizeof(double));
    
    for(int i = 0; i < n; i++) {
        for(int a = 0; a < n; a++) {
            scanf("%lf", &matrix1[i * n + a]);
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int a = 0; a < n; a++) {
            scanf("%lf", &matrix2[i * n + a]);
        }
    }
    
    scanf(" %c", &op);
    
    double* result = calculate_matrix(matrix1, matrix2, n, op);
    
    for(int i = 0; i < n; i++) {
        for(int a = 0; a < n; a++) {
            printf("%8.2lf ", result[i * n + a]);
        }
        printf("\n");
    }
    
    free(matrix1);
    free(matrix2);
    free(result);
    
    return 0;
}