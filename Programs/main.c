#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int randomNumber = 0;
    int guess = 0;
    int numberOfguess;
    time_t t;
    srand((unsigned) time(&t));
    randomNumber = rand() % 21;
    printf("I have Choosen a number between 0 and 20 you have to guess that number ! \n");


    for ( numberOfguess = 5 ; numberOfguess > 0 ; --numberOfguess){
         printf("You only have %d tr%s left :\n ",numberOfguess, numberOfguess == 1 ? "y" :"ies");
         printf("\n Please Enter a number between 0 and 20 : ");
         scanf("%d", &guess);
         printf("%d", randomNumber);


        if (randomNumber > guess )
        {
            printf(" \nNumber is higher ");

        }

        else if (randomNumber < guess )
        {
                printf(" \n Number is lower ");
        }
        else if(randomNumber == guess )
        {
            printf("\n Congratulations you Won!");
            break;
        }
        else
        {
            printf("\n You loose!");
        }

        }

}

