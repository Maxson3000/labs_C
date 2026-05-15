#include <stdio.h>

void print_dig_up(int n) {
    if (n < 10) {
        printf("%d ", n);
    } else {
        print_dig_up(n / 10);
        
        printf("%d ", n % 10);
    }

}
void print_dig_down(int n) {
    if (n < 10) {
        printf("%d ", n);
    } else {
        printf("%d ", n % 10);
        print_dig_down(n / 10);
    }
}

int main() {
    int N;
    printf("Введите число: ");
    scanf("%d", &N);
    

    printf("Цифры в прямом порядке:\n");
    print_dig_up(N);
    printf("\n");
    printf("Цифры в обратном порядке:\n");
    print_dig_down(N);
    
    

}