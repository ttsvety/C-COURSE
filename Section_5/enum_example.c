#include <stdio.h>
#include <stdbool.h>

int main(){

    enum gender {male, female};
    
    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    printf("%d\n%d\n", myGender, anotherGender);

    bool isMale = (myGender == anotherGender);

    printf("Is Male is 0-> false, 1->True: %d ", isMale);

    return 0;
}