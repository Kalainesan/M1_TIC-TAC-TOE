#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char t[3][3];
	int a[9]={2,2,2,2,2,2,2,2,2};
	int inp;
	int x,y;
	int i,j;
	int win;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t[i][j]='-';
		}
	}
	int count=9;

	while(count)
	{
		
	playermove(a);
	printa(a);

	win=check(a);
	//printf("%d\n",win);
	if(win==-10)
		{	printf("you win.\n");
				break;
		}
	count--;
	if(count==0)
	break;
	/*repeat:
		inp=rand()%9;
		//j=rand()%3;
		if(a[inp] != 2)
		goto repeat;
	a[inp]=0;*/
	compturn(a);

	printa(a);
	win=check(a);
	//printf("%d\n",win);
	if(win==10)
	{
		printf("comp win.\n");
		break;
	}

	count--;
	}
	if(count==0)
	{
		win=check(a);
		if(win==0)
		{
			printf("match draw\n");
		}
	}
}