#include <time.h>
#include <playagin.h>
#include <string.h>
struct playersingle
{
    char name[30];
    int swin;    //whowin but for single player
};
void playsingleeay()
{
    system("cls");
    char xo[3][3] = { '1','2','3','4','5','6','7','8','9'};
    struct playersingle player;
    player.swin=0;
    printf("Please enter your name : ");
    scanf("%s",player.name);
    printf("\n");
    int xd;
    xd=player.swin;
    intgain(xo,&xd);
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
