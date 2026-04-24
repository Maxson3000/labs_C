#include "mymath.h"
#include <stdarg.h>

double sum(int count, ...) {
    va_list args;
    va_start(args, count);
    double s = 0;
    for (int i = 0; i < count; i++) {
        s += va_arg(args, double);
    }
    va_end(args);
    return s;
}
double max(int count, ...) {
    va_list args;
    va_start(args, count);
    double m = va_arg(args, double);
    for (int i = 1; i < count; i++) {
        double x = va_arg(args, double);
        if (x > m) m = x;
    }
    va_end(args);
    return m;
}

double min(int count, ...) {
    va_list args;
    va_start(args, count);
    double m = va_arg(args, double);
    for (int i = 1; i < count; i++) {
        double x = va_arg(args, double);
        if (x < m) m = x;
    }
    va_end(args);
    return m;
}

double avg(int count, ...) {
    va_list args;
    va_start(args, count);
    double s = 0;
    for (int i = 0; i < count; i++) {
        s += va_arg(args, double);
    }
    va_end(args);
    return s / count;
}