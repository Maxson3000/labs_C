#include <stdio.h>
#include<locale.h>
int main(){
FILE*f1,*f2;
char s[256];
int year;
f1=fopen("text1.txt","rt");
f2=fopen("text2.txt","wt");
while(fgets(s,256,f1)){
    sscanf(s,"%*s %*s %*s %d",&year);
    if (year>1980){
        fprintf(f2,"%s",s);
    }
}
}