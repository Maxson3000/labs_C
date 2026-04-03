#include <stdio.h>
#include <string.h>

struct humen{
    char firstname[20];
    char lastname[20];
    int burn_year[20];
};
int main(){
    struct humen arr1[4];
    struct humen arr2[4];
    struct humen temp;
    for(int i=0;i<4;i++){
        scanf("%s %s %d" ,arr1[i].firstname ,arr1[i].lastname, & arr1[i].burn_year);
    }
    for(int i=0;i<4;i++){
        arr1[i]=arr2[i];
    }
    //сортировка
    for(int i=0;i<3;i++){
        for(int j;j=3-i;j++){
            if (arr2[j].burn_year > arr2[j + 1].burn_year) {
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }
    for(int i;i<4;i++){
        printf("%s %s %d", arr2[i].firstname,arr2[i].lastname,&arr2[i].burn_year);
    }
}   
