#include <stdio.h>

int myGlobal = 0;    //global variable

int main(){

    int myLocal = 0;    //local variable
    // can access myGlobal and myLocal

    return 0;
}

void myFunction(){
    int x; //local variable
    // can access myGlobal and x, not myLocal
}