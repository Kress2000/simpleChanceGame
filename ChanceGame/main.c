#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("INSTRUCTIONS\n\n");
    printf("Here is a Short Game!!  You are gonna be asked to Enter any number  between 1 and 20.\n You have only five chances to win! \n Winning is GUESSING the secret number!!");
    printf("\n\n\n  ready?? Let\'s get started!!!");
    const int SecretNumber = 7;
    int guess;
    int numberOfTrials = 1;;

        while(guess != SecretNumber && numberOfTrials < 6){
            printf("\nTrial: %d ", numberOfTrials);
            printf("\nEnter a number: ");
            scanf("%d", &guess);
            numberOfTrials++;
        }
    if(guess == SecretNumber){printf("\n Yess!! You win!!!!!\n");}

   else{
        printf("\n Oh nooo! You fail!!\n");

   }




    /*while(guess != SecretNumber){
        printf("\nEnter a number: ");
        scanf("%d", &guess);
    }*/
    //printf("\n Yess!! You win!!!!!\n");
  // printf("\n Oh nooo! You fail!!\n");
}
