#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <math.h>
#include "Xomultiplayer.h"
#include "hangman.h"
#include "hangmanhard.h"
#include "Xosingleplayeresy.h"
#include "hardxo.h"

void menuscreen()       //the start menu
{
    printf("\n\nEnter the corresponding number to the program you want to run: ");
    printf("\n\n \n  ------------------------------------\n |");
    printf(" 1. hang man (EASY)\t\t      |");
    printf(" \n |------------------------------------|\n |");
    printf(" 2. hang man (HARD)\t\t      |");
    printf(" \n |------------------------------------|\n |");
    printf(" 3. Tic-Tac-Toe (1-player-EASY)     |");
    printf(" \n |------------------------------------|\n |");
    printf(" 4. Tic-Tac-Toe (1-player-HARD)     |");
    printf(" \n |------------------------------------|\n |");
    printf(" 5.Tic-Tac-Toe (2-player)\t      |");
    printf(" \n |------------------------------------|\n |");
    printf(" 6.Exit\t\t\t      |");
    printf(" \n  ------------------------------------\n");

}
void intro()
{
    printf("MADE BY CEO and cofounder HAASSAN MIKAWI 20104451\n\t\t\t\tmazen ibrahim mohamed 20104387\n\n\n");
}

int main()
{
    srand(time(NULL));
    int ga_no;
    while (1)
        {
            menuscreen();
            scanf("%d", &ga_no);
            Beep(500, 500);
            system("cls");
            if (ga_no == 1)
            {
                hangmaneasy();
                system("cls");
            }
            else if (ga_no == 2)
            {
                hangmanhard();
                system("cls");
            }
            else if (ga_no == 3)
            {

                playsingleeay();
            }
            else if (ga_no == 4)
            {
          /*      system("cls");
                hardminx(); */
            printf(" sorry bro \n game is under construction\n but we will update you on our website\n \t\twww.aast.edu\n");
            }
            else if (ga_no == 5)
            {
                system("cls");
                playmulti();
            }
            else if (ga_no == 6)
            {
                system("cls");
                printf("\t\t\t\tThank you :\n\n\n\t\t\t\t");
                intro();
                exit(0);
            }
        }
    return 0;
}


