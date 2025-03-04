#include <stdio.h>

int main(){

    int prime_nums[50];
    int prime_index = 2;

    _Bool is_prime;

    prime_nums[0] = 2;
    prime_nums[1] = 3;

    for(int p = 5; p<100; p+=2){
        is_prime = 1;

        for(int i = 1; is_prime && p / prime_nums[i] >= prime_nums[i]; i++){
            if( p % prime_nums[i] == 0){
                is_prime = 0;
            }
        }

        if(is_prime ==1){
            prime_nums[prime_index]=p;
            prime_index++;
        }
    }

    for(int i = 0; i <prime_index; i++){
        printf("%d ", prime_nums[i]);
    }

    return 0;
}