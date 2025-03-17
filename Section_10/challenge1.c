#include <stdio.h>
#include <stdbool.h>

int count_string(const char str[]);
void concatenate(char result[], const char str1[], const char str2[]);

bool is_equal( const char str1[], const char str2[]);

int main(){

    const char str1[] = "This is me!";
    const char str2[] = "My name is Tsvetina";
    const char str3[] = "This is me!";
    char result[100];

    printf("The count of characters in the string: \"%s\" is %d\n\n", str1, count_string(str1));
    printf("The count of characters in the string: \"%s\" is %d\n\n", str2, count_string(str2));

    concatenate(result, str1, str2);

    printf("Is string: \"%s\" equal to string \"%s\" -> %d\n\n", str1, str3, is_equal(str1, str3));
    printf("Is string: \"%s\" equal to string \"%s\" -> %d\n\n", str2, str3, is_equal(str2, str3));



    return 0;

}

int count_string(const char str[]){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}

void concatenate(char result[], const char str[], const char str2[]){
    int count = 0;
    int result_count = 0;
    while(str[count] != '\0'){
        result[result_count] = str[count];
        count++;
        result_count++;
        //printf("%s", result);
    }

    count = 0;
    while(str2[count] != '\0'){
        result[result_count] = str2[count];
        result_count++;
        count++;
    }

    result[result_count] = '\0';
    
    printf("%s\n\n", result);
}

bool is_equal( const char str1[], const char str2[]){
    int count = 0;
    bool isEqual = false;
    while (str1[count] != '\0' && str2[count] != '\0' && str1[count] == str2[count]){
        count++;
        if(str1[count] == '\0' && str2[count] == '\0'){
            isEqual = true;
        }
        else{
            isEqual = false;
        }
        }
        return isEqual;
    }