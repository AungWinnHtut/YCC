#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"hUpdatePOS.h"
/*struct strPOS funUpdatePOS(char ch,struct strPOS orLoc);*/




int main()
{

	int status=0;
	int dx=0, dy=0;
	char ch;
	struct strPOS uloc;
	int i;
	time_t t;
	srand((unsigned) time(&t));
	uloc.x=rand()%641;
	uloc.y=rand()%481;

	do{
		uloc.x=rand()%641;
		uloc.y=rand()%481;
	}while((uloc.x==dx) && (uloc.y==dy));


	do{
		system("cls");
		printf("user at %d,%d\n",uloc.x,uloc.y);
		printf("door at %d,%d\n",dx,dy);
		ch = _getch();

		/*if arrows*/
		if(ch==-32)
		{
			ch = _getch();
			/*left*/
			uloc = funUpdatePOS(ch,uloc);

		}


		if((uloc.x==dx) && (uloc.y==dy))
		{
			printf("you won the level");
			return 0;
		}



	}while(ch!=27);



	return 0;
}
