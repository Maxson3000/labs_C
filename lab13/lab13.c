#include <stdio.h>
#include <signal.h>
int choise;
void signal_catcher(int sig){
    printf("получил сигнал");
    switch (sig)
    {
    case SIGABRT: printf("пойман сигнал SIGABRT"); break;
    case SIGFPE: printf("пойман сигнал SIGFPE"); break;
    case SIGILL: printf("пойман сигнал SIGILL"); break;
    case SIGINT:printf("пойман синал SIGINT"); break;
    case SIGSEGV:printf("пойман сигнал SIGSEGV:"); break;
    case SIGTERM:printf("пойман сигнаол SIGTERM"); break;
    default: printf("сигнал ее пойман");
        
    }

}

int main(){
    //ловка сигнала 
    signal(SIGABRT,signal_catcher);
    signal(SIGFPE,signal_catcher);
    signal(SIGILL,signal_catcher);
    signal(SIGINT,signal_catcher);
    signal(SIGSEGV,signal_catcher);
    signal(SIGTERM,signal_catcher);
    //ввод с консоли 
     printf("Select the signal to send:\n");
    printf("1 SIGABRT\n");
    printf("2 SIGFPE\n");
    printf("3 SIGILL\n");
    printf("4 SIGINT\n");
    printf("5 SIGSEGV\n");
    printf("6 SIGTERM\n");
    scanf("%d",&choise);
    switch (choise)
    {
    case 1:raise(SIGABRT); break;
    case 2:raise(SIGFPE); break;;
    case 3: raise(SIGILL); break;
    case 4: raise(SIGINT); break;
    case 5 :raise(SIGSEGV); break;
    case 6 : raise(SIGTERM); break;
    default: printf("не правильный выбор");}

}