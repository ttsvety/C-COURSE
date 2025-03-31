#include <stdio.h>

int main(){

    int count = 43;
    int *const pcount = &count; //Defines a constant pointer - pointer itself cannot change its value
    *pcount  = 110;

    int items = 34;
    //pcount = &items;  //Error 


    //SOOOOOO
    // const int * //value can not be changed
    //int *const //pointer address cannot change

    // you can create a constant pointer that point to a value  that is also constant

    int item =  25;
    const int *const pitem = &item;
    item = 45;

    return 0;
}