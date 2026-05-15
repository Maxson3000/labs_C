#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=0;
    printf("Vvedite n=");
    scanf("%d",&n);
    int num[50];
    int left=0;
    int right=n-1;
    
    printf("Vvedite chislo ");
    char str[50];
    scanf("%s", str);
    for(int i=0; i<n; i++){
        num[i]=str[i]-'0';
    }
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    while(left<right){
        int arr= num[left];
        num[left]=num[right];
        num[right]=arr;
        left++;
        right--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    

    
}