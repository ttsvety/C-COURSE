#include <stdio.h>

int main(){

    int x = 500;
    int y = 1;

    //x = y > 7 ? 25 : 50;
    if (y > 7){
        x = 25;
    }
    else{
        x = 50;
    }
    
    printf("%d\n%d", x, y);
    return 0;
}