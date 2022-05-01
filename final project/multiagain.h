#include <windows.h>
void multigain(char xo[][3],int player [])
{
    print(xo);
    int countruun = 0;
	int x1, x2;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			if (xo[i][j] == 'x' || xo[i][j] == 'o')
				    countruun++;
			if ((i + j) % 2 == 0)
			{
				scanf("%d", &x1);
				Beep(300, 500);
				countruun++;
                while ((x1 >= 1 && x1 <= 9) &&((x1 == 1 && (xo[0][0] == 'x' || xo[0][0] == 'o')) || (x1 == 2 && (xo[0][1] == 'x' || xo[0][1] == 'o')) || (x1 == 3 && (xo[0][2] == 'x' || xo[0][2] == 'o')) || (x1 == 4 && (xo[1][0] == 'x' || xo[1][0] == 'o')) || (x1 == 5 && (xo[1][1] == 'x' || xo[1][1] == 'o')) || (x1 == 6 && (xo[1][2] == 'x' || xo[1][2] == 'o')) || (x1 == 7 && (xo[2][0] == 'x' || xo[2][0] == 'o')) || (x1 == 8 && (xo[2][1] == 'x' || xo[2][1] == 'o')) || (x1 == 8 && (xo[2][1] == 'x' || xo[2][1] == 'o')) || (x1 == 9 && (xo[2][2] == 'x' || xo[2][2] == 'o'))))
				{
					printf("please dont enter number taken by x or o and between 1 to 9 :");
					scanf("%d", &x1);
				}
				switch (x1)
				{
				case 1:xo[0][0] = 'x'; break;
				case 2:xo[0][1] = 'x'; break;
				case 3:xo[0][2] = 'x'; break;
				case 4:xo[1][0] = 'x'; break;
				case 5:xo[1][1] = 'x'; break;
				case 6:xo[1][2] = 'x'; break;
				case 7:xo[2][0] = 'x'; break;
				case 8:xo[2][1] = 'x'; break;
				case 9:xo[2][2] = 'x'; break;
				default:break;
				}
                print(xo);
				if (countruun>=5)
				{
					if (check(xo) == 1)
                       {
                        printf(" x win \n  gongrats to player 1\n hard hard luck player 2");
                        player[0]++;
                        printf("would you like to play again\n 1.yes\n 2.no : ");
                            int aaa;
                            scanf("%d",&aaa);
                            while (aaa != 1 && aaa != 2)
                            {
                                printf("please chose between 1 & 2 : ");
                                scanf("%d", &aaa);
                            }
                            if(aaa==1)
                            {
                                char v='1';
                                for(int i=0;i<3;i++)
                                    for(int j=0;j<3;j++)
                                    {
                                       xo[i][j]=v;
                                        v++;
                                    }
                                return multigain(xo,player);
                            }
                            else
                                return ;
						}

					else if (check(xo) == 0)
						{
						    player[1]++;
						    printf(" o win \n  gongrats to player 2\n hard hard luck player 1");
                            printf("would you like to play again\n 1.yes\n 2.no : ");
                            int aaa;
                            scanf("%d",&aaa);
                            while (aaa != 1 && aaa != 2)
                            {
                                printf("please chose between 1 & 2 : ");
                                scanf("%d", &aaa);
                            }
                            if(aaa==1)
                            {
                                char v='1';
                                for(int i=0;i<3;i++)
                                    for(int j=0;j<3;j++)
                                    {
                                       xo[i][j]=v;
                                        v++;
                                    }
                                return multigain(xo,player);
                            }
                            else
                                return ;
						}
                    else if(check(xo)==-1)
                         {
                            printf("\nhard luck \n game is draw\n");
                            printf("would you like to play again\n 1.yes\n 2.no : ");
                            int aaa;
                            scanf("%d",&aaa);
                            Beep(300, 500);
                            while (aaa != 1 && aaa != 2)
                            {
                                printf("please chose between 1 & 2 : ");
                                scanf("%d", &aaa);
                                Beep(300, 500);
                            }
                            if(aaa==1)
                            {
                                char v='1';
                                for(int i=0;i<3;i++)
                                    for(int j=0;j<3;j++)
                                    {
                                       xo[i][j]=v;
                                        v++;
                                    }
                                return multigain(xo,player);
                            }
                            else
                                return ;
						}
				}
			}
			else
			{
				int b = 0;
				scanf("%d", &x2);
				Beep(300, 500);
				countruun++;
                while ((x2 >= 1 && x2 <= 9)&&((x2 == 1 && (xo[0][0] == 'x' || xo[0][0] == 'o')) || (x2 == 2 && (xo[0][1] == 'x' || xo[0][1] == 'o')) || (x2 == 3 && (xo[0][2] == 'x' || xo[0][2] == 'o')) || (x2 == 4 && (xo[1][0] == 'x' || xo[1][0] == 'o')) || (x2 == 5 && (xo[1][1] == 'x' || xo[1][1] == 'o')) || (x2 == 6 && (xo[1][2] == 'x' || xo[1][2] == 'o')) || (x2 == 7 && (xo[2][0] == 'x' || xo[2][0] == 'o')) || (x2 == 8 && (xo[2][1] == 'x' || xo[2][1] == 'o')) || (x2 == 8 && (xo[2][1] == 'x' || xo[2][1] == 'o')) || (x2 == 9 && (xo[2][2] == 'x' || xo[2][2] == 'o'))))
				{
				    printf("please dont enter number taken by x or o and between 1 to 9 :");
					scanf("%d", &x2);
				}
				switch (x2)
				{
				case 1:xo[0][0] = 'o'; break;
				case 2:xo[0][1] = 'o'; break;
				case 3:xo[0][2] = 'o'; break;
				case 4:xo[1][0] = 'o'; break;
				case 5:xo[1][1] = 'o'; break;
				case 6:xo[1][2] = 'o'; break;
				case 7:xo[2][0] = 'o'; break;
				case 8:xo[2][1] = 'o'; break;
				case 9:xo[2][2] = 'o'; break;
				default:break;
				}
				print(xo);
				if (countruun>=5)
				{
					if (check(xo) == 1)
                       {
                        printf("\n gongrats x win\n HARD LUCK o\n what a wonderfull game");
                        player[0]++;
                        printf("would you like to play again\n 1.yes\n 2.no : ");
                            int aaa;
                            scanf("%d",&aaa);
                            Beep(300, 500);
                            while (aaa != 1 && aaa != 2)
                            {
                                printf("please chose between 1 & 2 : ");
                                scanf("%d", &aaa);
                                Beep(300, 500);
                            }
                            if(aaa==1)
                            {
                                char v='1';
                                for(int i=0;i<3;i++)
                                    for(int j=0;j<3;j++)
                                    {
                                       xo[i][j]=v;
                                        v++;
                                    }
                                return multigain(xo,player);
                            }
                            else
                                return ;
						}

					else if (check(xo) == 0)
						{
						    player[1]++;
						    printf(" o win \n  gongrats to player 2\n hard hard luck player 1");
                            printf("would you like to play again\n 1.yes\n 2.no : ");
                            int aaa;
                            scanf("%d",&aaa);
                            Beep(300, 500);
                            while (aaa != 1 && aaa != 2)
                            {
                                printf("please chose between 1 & 2 : ");
                                scanf("%d", &aaa);
                                Beep(300, 500);
                            }
                            if(aaa==1)
                            {
                                char v='1';
                                for(int i=0;i<3;i++)
                                    for(int j=0;j<3;j++)
                                    {
                                       xo[i][j]=v;
                                        v++;
                                    }
                                return multigain(xo,player);
                            }
                            else
                                return ;
						}
                    else if(check(xo)==-1)
                         {
                            printf("\nhard luck \n game is draw\n");
                            printf("would you like to play again\n 1.yes\n 2.no : ");
                            int aaa;
                            scanf("%d",&aaa);
                            Beep(300, 500);
                            while (aaa != 1 && aaa != 2)
                            {
                                printf("please chose between 1 & 2 : ");
                                scanf("%d", &aaa);
                                Beep(300, 500);
                            }
                            if(aaa==1)
                            {
                                char v='1';
                                for(int i=0;i<3;i++)
                                    for(int j=0;j<3;j++)
                                    {
                                       xo[i][j]=v;
                                        v++;
                                    }
                                return multigain(xo,player);
                            }
                            else
                                return ;
						}
				}


			}
		}
	if (countruun == 9)
		return ;
}
