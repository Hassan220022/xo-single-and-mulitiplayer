#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <multiagain.h>
void print(char xo[3][3])
{
    system("cls");
	printf("  %c  |  %c  |  %c \n", xo[0][0], xo[0][1], xo[0][2]);
	printf("----------------\n");
	printf("  %c  |  %c  |  %c \n", xo[1][0], xo[1][1], xo[1][2]);
	printf("----------------\n");
	printf("  %c  |  %c  |  %c \n", xo[2][0], xo[2][1], xo[2][2]);
}

int check(char xo[3][3])
{
	int xc = 0, oc = 0, runcount = 0;
	for (int i = 0; i < 3; i++)
	{
	    for (int j = 0; j < 3; j++)
		{
			if (xo[i][j] == 'x' || xo[i][j] == 'o')
				runcount++;
            if (xo[i][j] == 'x')
				xc++;
			else if (xo[i][j] == 'o')
				oc++;
			if (xc == 3)
                return 1;
			if (oc == 3)
				return 0;
		}
			xc = 0;
			oc = 0;
    }
	for (int j = 0; j < 3; j++)
	{
        for (int i = 0; i < 3; i++)
		{
			if (xo[i][j] == 'x')
				xc++;
			else if (xo[i][j] == 'o')
				oc++;
			if (xc == 3)
				return 1;
			if (oc == 3)
				return 0;
		}
			xc = 0;
			oc = 0;
    }
	if ((xo[0][0] == 'x' && xo[1][1] == 'x' && xo[2][2] == 'x') || (xo[0][2] == 'x' && xo[1][1] == 'x' && xo[2][0] == 'x'))
		return 1;
	else if ((xo[0][0] == 'o' && xo[1][1] == 'o' && xo[2][2] == 'o') || (xo[0][2] == 'o' && xo[1][1] == 'o' && xo[2][0] == 'o'))
		return 0;
	if (runcount != 9)
		return 2;
    else
        return -1;
}
struct playersmulti
{
    char name[30];
    int whowin;
    int swin;    //whowin but for single player
};
void playmulti()
{
    struct playersmulti player[2];
    player[0].whowin=0;
    player[1].whowin=0;
    char xo[3][3] = { '1','2','3','4','5','6','7','8','9' };
    printf("Frist player please enter your name : ");
    scanf("%s", player[0].name);
    Beep(300, 500);
    printf("Second player please enter your name : ");
    scanf("%s", player[1].name);
    Beep(300, 500);
    printf("\n player 1.%s will play then you 2.%s\n", player[0].name, player[1].name);
    Sleep(4000);
    int play[2];
    play[0]=player[0].whowin;
    play[1]=player[1].whowin;
    multigain(xo,play);
    player[0].whowin=play[0];
    player[1].whowin=play[1];
     if(player[0].whowin>player[1].whowin)
       {
           printf("!!!!!!DAM BRO what a player!!!!!!\n\n%s you had win %d",player[0].name,player[0].whowin);
           Sleep(4000);
           system("cls");
       }
    else if(player[0].whowin<player[1].whowin)
        {
           printf("!!!!!!DAMN BRO what a player!!!!!!\n\n%s you had win %d",player[1].name,player[1].whowin);
           Sleep(4000);
           system("cls");
        }

}

