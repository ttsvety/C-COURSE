#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Family
{
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

struct Date my_date(void); //this function return struct 
bool siblings(struct Family *pmember1, struct Family *pmember2){
    if(strcmp(pmember1->mother, *pmember2->mother) == 0){
        return true;
    }
    else{
        return false;
    }
}

// bool siblings(struct Family member1, struct Family member2){
//     if(strcmp(member1.mother, member2.mother) == 0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }