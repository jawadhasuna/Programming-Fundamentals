//Simple Timer 


#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<DOS.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
  // char msg[80];

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\TURBOC3\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %sn", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   char msg[0];
   int height = 0;
    setcolor(60);
    settextstyle(2, HORIZ_DIR, 30);


    for(int i=120; i>=0; i--) {
	sprintf(msg, "%d", i);
	outtextxy(280,230, msg);
	delay(500); //change this to 1000

	setbkcolor(0);

	setcolor(1);
	setfillstyle(8, 5);
	fillellipse(300, 250, 100, 100);

	setcolor(RED);
	arc(300, 250, 0, height, 110);
	height += 6;
    }
       outtextxy(190,370, "Thank You !");


   /* clean up */
   getch();
   closegraph();
   return 0;}
