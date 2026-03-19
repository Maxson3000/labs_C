#pragma once
#define _CRT_SECURE_NO_WARNINGS
#ifndef module_h
#define module_h
#include <math.h>
//double a, b, c, p2;

// Функция проверки: можно ли из сторон a, b, c составить треугольник
int valid(double a, double b, double c) {
	// Если хотя бы одно условие ложно, вернет 0.
	return (a + b > c) && (a + c > b) && (b + c > a);
}

// Функция расчета периметра
double get_p(double a, double b, double c) {
	return a + b + c;
}

// Функция расчета площади по формуле Герона
double get_s(double a, double b, double c) {
	double p2 = get_p(a, b, c) / 2.0;
	return sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
}

#endif
