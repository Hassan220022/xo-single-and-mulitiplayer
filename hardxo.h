#include <time.h>
#include <string.h>
#include <minmax.h>
struct playermin
{
    char name[30];
    int swin;    //whowin but for single player
};
void hardminx()
{
    system("cls");
    char xo[3][3] = { '1','2','3','4','5','6','7','8','9'};
    struct playermin player;
    player.swin=0;
    printf("Please enter your name : ");
    scanf("%s",player.name);
    printf("\n");
    int xd;
    xd=player.swin;
    minmaxxx(xo,&xd);
    player.swin=xd;
    printf("%d%d",player.swin,xd);
    system("cls");
    if(player.swin>=1)
       {
           printf("!!!!!!DAM BRO what a player!!!!!!\n\n%s you had win %d",player.name,player.swin);
           Sleep(4000);
           system("clr");
       }

}


