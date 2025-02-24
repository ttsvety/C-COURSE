#include <stdio.h>

int main(){

    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    for(enum Weekday day = Monday; day <= Sunday; day++){
        if(day == Wednesday){
            continue;
        }
        printf("The day is not Wednesday\n");
    }
    
    return 0;
}