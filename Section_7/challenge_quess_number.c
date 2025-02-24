#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //Generate radom number
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand()%21;


    int guess_num, lives=5;
    printf("This is a guessing game.\nI have chosen a number between 0 and 20 which you must guess\n");

    while(guess_num != randomNumber){
        printf("\nYou have %d tries left\n", lives);
        printf("Enter a guess: ");
        scanf("%d", &guess_num);
        if(guess_num>20 || guess_num<0){
            printf("You should put number between 0 and 20.\n");
        }
        else if(guess_num > randomNumber){
            printf("Sorry, %d is wrong. My number is less than that.\n", guess_num);
            lives--;
        }
        else if(guess_num < randomNumber){
            printf("Sorry, %d is wrong. My number is greater than that.\n", guess_num);
            lives--;
        }
        else{
            printf("\nCongratulations. You guessed it!");
            break;
        }

        if(lives == 0){
            printf("\nSorry you have no more lives.");
            break;
        }
    }



    return 0;
}