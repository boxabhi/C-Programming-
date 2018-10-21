#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int choice,player;
char square[10] = { 'o', '1', '2', '3', '4','5','6','7','8','9'};

void displayBoard();
int checkForWin();
void markBoard(char mark);

int main()
{
    int gameStatus;
    char mark;
    player = 1;

    do
        {
            displayBoard();


            player = player % 2 ? 1 : 2;
            printf(" Player %d, chance: ",player);
            scanf("%d",choice);

            mark = (player == 1) ? 'X' : 'O';

            markBoard(mark);
            gameStatus = checkForWin();
        }while(gameStatus = 1);

        player++;
    return 0;
}

/*******************
 1 For game is in progress
 0 Winner Declared
-1 Game Draw
********************/
int checkForWin()
{
    int returnValue;
    if (square[1] == square[2] && square[2]==square[3])
        returnValue = 0;
    else if (square[4] == square[5] && square[5]==square[6])
        returnValue = 0;
    else if (square[7] == square[8] && square[8]==square[9])
        returnValue = 0;
    else if (square[1] == square[4] && square[4]==square[7])
        returnValue = 0;
    else if (square[2] == square[5] && square[5]==square[8])
        returnValue = 0;
    else if (square[3] == square[6] && square[6]==square[9])
        returnValue = 0;
    else if (square[1] == square[5] && square[5]==square[9])
        returnValue = 0;
    else if (square[3] == square[5] && square[5]==square[7])
        returnValue = 0;
    else if(square[1] != '1' && square[2] != '2' && square[3] != '3' &&
            square[4] != '4' && square[4] != '4' && square[5] != '5' &&
            square[6] != '6' && square[7] != '7' && square[8] != '8' &&
                square[1] != '9')
        returnValue = -1;
    else
    {
        returnValue = 1;
    }

    return returnValue;
}
void displayBoard()
{
    system("cls");
    char player_one[2];
    printf("############## This is a TicTacToe Game. ############ \n\n\n\n\n");

   // printf("\nPlayer 1 enter you want X or O : ");
   // scanf("%c", player_one);

    if(player_one == 'X')
        printf("\n Player 1 is X and Player 2 is O\n\n\n\n\n");
    else
        printf("\n Player 1 is O and Player 2 is X\n\n\n\n\n");


    printf(" %c  |  %c  | %c   \n",square[1],square[2],square[3]);
    printf("____|_____|____\n");
    printf("    |     |     \n");

    printf(" %c  |  %c  | %c   \n",square[4],square[5],square[6]);
    printf("____|_____|____\n");
    printf("    |     |     \n");

    printf(" %c  |  %c  | %c   \n",square[7],square[8],square[9]);
    printf("____|_____|____\n");
    printf("    |     |     \n");

}

void markBoard(char mark)
{

        if(choice == 1 && square[1]=='1' )
           square[1] = mark;
        else if (choice == 2 && square[2]=='2')
            square[2] = mark;
        else if (choice == 3 && square[3]=='3')
            square[3] = mark;
        else if (choice == 4 && square[4]=='4')
            square[4] = mark;
        else if (choice == 5 && square[5]=='5')
            square[5] = mark;
        else if (choice == 6 && square[6]=='6')
            square[6] = mark;
        else if (choice == 7 && square[7]=='7')
            square[7] = mark;
        else if (choice == 8 && square[8]=='8')
            square[8] = mark;
        else if (choice == 9 && square[9]=='9')
            square[9] = mark;
        else
        {
         printf("Invalid input");
         player--;
         getch();
        }
}


