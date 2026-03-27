#include "matrix.h"
#include <stdlib.h>
double* calculate_matrix(double* matrix1, double* matrix2, int n, char op) {
    double* result = (double*)malloc(n * n * sizeof(double));
    
    for (int i = 0; i < n * n; i++) {
        if (op == '+')
            result[i] = matrix1[i] + matrix2[i];
        else if (op == '-')
            result[i] = matrix1[i] - matrix2[i];
        else if (op == '*')
            result[i] = matrix1[i] * matrix2[i];
    }
    
    return result;
}