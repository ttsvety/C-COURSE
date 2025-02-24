#include <stdio.h>

int func(int x){
    x++;
    printf("x from function: %d\n", x);
}
int main(){
    int x = 5;
    func(x);
    printf("x from main: %d", x);

    return 0;
}

