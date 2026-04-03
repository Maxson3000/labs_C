#include <stdio.h>
#include <string.h>

int main(){
    FILE*f1,*f2;
    char s[300];
    char first_name[10][100];  
    char last_name[10][100];   
    char gender[10][10];      
    int height[10];            
    int burn_year[10];        
    int choise;
    char temp_first[100], temp_last[100], temp_gender[10];
    int temp_height, temp_burn_year;
    int count = 0;
    int i, j; 
    
    f1 = fopen("text1.txt", "rt");
    f2 = fopen("text2.txt", "wt");
    while(fgets(s, 256, f1)){
        sscanf(s, "%s %s %s %d %d", first_name[count], last_name[count], gender[count], &height[count], &burn_year[count]);
        count++;
    }
    fclose(f1); 
    
    printf("\nSelect sorting field:\n");
    printf("1 - by name \n");
    printf("2 - by surname\n");
    printf("3 - by height\n");
    printf("4 - by birth year\n");
    printf("you choise: ");
    scanf("%d", &choise);
    for(i = 0; i < count - 1; i++){
        for(j = i + 1; j < count; j++){  
            if(choise == 1){ 
                if(strcmp(first_name[i], first_name[j]) > 0){
                    strcpy(temp_first, first_name[i]);
                    strcpy(first_name[i], first_name[j]);
                    strcpy(first_name[j], temp_first);
                    
                    strcpy(temp_last, last_name[i]);
                    strcpy(last_name[i], last_name[j]);
                    strcpy(last_name[j], temp_last);
                    
                    strcpy(temp_gender, gender[i]);
                    strcpy(gender[i], gender[j]);
                    strcpy(gender[j], temp_gender);
                    
                    temp_height = height[i];           
                    height[i] = height[j];             
                    height[j] = temp_height;          
                    
                    temp_burn_year = burn_year[i];     
                    burn_year[i] = burn_year[j];      
                    burn_year[j] = temp_burn_year;     
                }
            }
            else if(choise == 2){
                if(strcmp(last_name[i], last_name[j]) > 0){
                    strcpy(temp_first, first_name[i]);
                    strcpy(first_name[i], first_name[j]);
                    strcpy(first_name[j], temp_first);
                    
                    strcpy(temp_last, last_name[i]);
                    strcpy(last_name[i], last_name[j]);
                    strcpy(last_name[j], temp_last);
                    
                    strcpy(temp_gender, gender[i]);
                    strcpy(gender[i], gender[j]);
                    strcpy(gender[j], temp_gender);
                    
                    temp_height = height[i];
                    height[i] = height[j];
                    height[j] = temp_height;
                    
                    temp_burn_year = burn_year[i];
                    burn_year[i] = burn_year[j];
                    burn_year[j] = temp_burn_year;
                }
            }
            else if(choise == 3){
                if(height[i] > height[j]){  
                    strcpy(temp_first, first_name[i]);
                    strcpy(first_name[i], first_name[j]);
                    strcpy(first_name[j], temp_first);
                    
                    strcpy(temp_last, last_name[i]);
                    strcpy(last_name[i], last_name[j]);
                    strcpy(last_name[j], temp_last);
                    
                    strcpy(temp_gender, gender[i]);
                    strcpy(gender[i], gender[j]);
                    strcpy(gender[j], temp_gender);
                    
                    temp_height = height[i];
                    height[i] = height[j];
                    height[j] = temp_height;
                    
                    temp_burn_year = burn_year[i];
                    burn_year[i] = burn_year[j];
                    burn_year[j] = temp_burn_year;
                }
            }
            else if(choise == 4){
                if(burn_year[i] > burn_year[j]){ 
                    strcpy(temp_first, first_name[i]);
                    strcpy(first_name[i], first_name[j]);
                    strcpy(first_name[j], temp_first);
                    
                    strcpy(temp_last, last_name[i]);
                    strcpy(last_name[i], last_name[j]);
                    strcpy(last_name[j], temp_last);
                    
                    strcpy(temp_gender, gender[i]);
                    strcpy(gender[i], gender[j]);
                    strcpy(gender[j], temp_gender);
                    
                    temp_height = height[i];
                    height[i] = height[j];
                    height[j] = temp_height;
                    
                    temp_burn_year = burn_year[i];
                    burn_year[i] = burn_year[j];
                    burn_year[j] = temp_burn_year;
                }
            }
        }
    }
    
    for(i = 0; i < count; i++){
        fprintf(f2, "%s %s %s %d %d\n", first_name[i], last_name[i], gender[i], height[i], burn_year[i]);
    }
}