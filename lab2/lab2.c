#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() {
	int i, a,k;
	int x1 = 0, x2 = 0;
	double list[3][3];
	for (i = 0;i < 3;i++) {
		for (a = 0; a < 3; a++) {
			scanf("%lf", &list[i][a]);

		}
	}
	for (i = 0;i <3;i++) {
		x1 = x1 + list[i][i];
	}
	for (i = 2;i >-1; i--){
		x2=x2 + list[i][2-i];

	}
	
	printf("%d,%d", x1, x2);
	int list2[2][2];
	for (i = 0;i < 2;i++) {
		for (a = 0; a < 2; a++) {
			scanf("%d", &list2[i][a]);
		}
	}int S[2][2];
	for (i = 0; i < 2; i++) {
		for (a = 0; a < 2; a++) {
			for (k = 0; k < 2; k++) {
				S[i][a] = list2[i][k] * list2[k][a] + list2[i][1 - k] * list2[1 - k][a];
			}
		}
	}
	for (i = 0; i < 2; i++) {
		printf("\n");
		for (a = 0; a < 2; a++) {
			printf(" %d", S[i][a]);
		}
	}
}