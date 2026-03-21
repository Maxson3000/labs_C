#include <stdbool.h>
bool valid(double a, double b, double c) {
	return (a + b > c) && (a + c > b) && (b + c > a);
}
double get_p(double a, double b, double c) {
	return a + b + c;
}
double get_s(double a, double b, double c) {
	double p2 = get_p(a, b, c) / 2.0;
	return sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
}