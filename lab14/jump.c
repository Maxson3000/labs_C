#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;    // сюда сохраняем точку прыжка
int N;          // сколько чисел суммировать
void fib_sum(int a,int b,int step,int sum) {
    if (step > N) {
        longjmp(buf, sum); 
    }
    fib_sum(b,a +b, step + 1, sum+ b);
}

int main() {
    printf("Vvedite N: ");
    scanf("%d", &N);
    int result = setjmp(buf);   
    if (result == 0) {
        if (N == 1) {
            longjmp(buf,1);  
        }
        fib_sum(1, 1, 2, 1);  
    } else {
        printf("Summa pervyh %d chisel Fibonachchi: %d\n", N, result);
    }

}