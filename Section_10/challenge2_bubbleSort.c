#include <stdio.h>
#include <string.h>

int main(){
    int strings;
    char str[50][50];//25 strings of size 50
    char temp[50];

    printf("Input number of strings: ");
    scanf("%d", &strings);

    printf("Input string %d: \n", strings);

    for(int i=0; i < strings; i++){
        scanf("%s", str[i]);
        
    }
    
    for(int i = 0; i<strings; i++){
        for(int j = 0; j<=strings-i; j++){
            if(strcmp(str[j], str[j+1])>0){
                strncpy(temp, str[j], sizeof(temp)-1);
                strncpy(str[j], str[j+1], sizeof(str[j])-1);
                strncpy(str[j+1], temp, sizeof(str[j]+1)-1);
            }
        }
    }

    printf("The strings appear after sorting: \n");
    for(int i = 0; i<= strings; i++){
        printf("%s\n", str[i]);
    }
    
    return 0;
}