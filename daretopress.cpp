#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>

#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_UP 72
#define KEY_DOWN 80
					     // ENTER KEY = 13
 void OBJECTS();
 void gameover(int score);
 void INSTRUCTIONS();
 void MENU();

//

 void main()
{
 clrscr();
 int gd,gm=DETECT;
 initgraph(&gm,&gd,"c:\\turboc3\\bgi");

 MENU();
}

//

 void MENU()
{
 clrscr();
 cleardevice();

 sound(300);
 delay(50);
 nosound();

 int ch,x=150,y=210,z=462;
 char A,B,CH;

 for(;;)
{
 setbkcolor(0);
 setcolor(4);

 settextstyle(0,0,5.5);
 outtextxy(75,55,"DARE TO PRESS");


 setcolor(11);          //LINE ABOVE HEADING
 line(0,40,640,40);


 setcolor(11);          //LINE BELOW HEADING
 line(0,110,640,110);

 

setcolor(7);

 settextstyle(10,0,3);
 outtextxy(160,150,"1> START GAME");

 settextstyle(10,0,3);
 outtextxy(160,210,"2> INSTRUCTIONS");

 settextstyle(10,0,3);
 outtextxy(160,270,"3> EXIT");

 setcolor(12);
 settextstyle(0,0,2.5);
 outtextxy(10,400,"* PLEASE READ INSTRUCTIONS BEFORE START");


//------------------------------------------------------------------
// #SELECTION BOX

 setcolor(11);
 setlinestyle(0,1,3);
 rectangle(z,x,206,y);

 if(kbhit())
{                                            // w = 119
 int k=getch();

 if(k==72)              // UP
{
 y-=60;
 x-=60;
 sound(300);
 delay(50);
 nosound();

 if(x<150)
{
 x=150;
 y=210;
}
 }

 if(k==80)                 //DOWN
{
 y+=60;
 x+=60;
 sound(300);
 delay(50);
 nosound();

 if(y>330)
{
 y=330;
 x=270;
}
 }

 if((y==210)&&(x==150))
{
 z=462;
 if(k==13)
 OBJECTS();
}

 if((y==270)&&(x==210))
{
 z=485;
 if(k==13)
 INSTRUCTIONS();
}

 if((y==330)&&(x==270))
{
 z=308;
 if(k==13)
 exit(0);
}
delay(65);
cleardevice();
}
 }
  }

//

 void gameover(int score)
{
 clrscr();
 cleardevice();
 nosound();
 setbkcolor(3);

 char arr[50];
 int l=150,m=210,Z=440;

 for(;;)
{
 setcolor(4);
 settextstyle(0,0,8);
 outtextxy(68,70,"GAMEOVER");

 setcolor(1);
 settextstyle(10,0,2);
 outtextxy(161,150,"1> START AGAIN");

 settextstyle(10,0,2);
 outtextxy(161,210,"2> MAIN MENU");

 settextstyle(10,0,2);
 outtextxy(161,270,"3> EXIT");

 setcolor(4);
 settextstyle(0,0,2);
 outtextxy(161,350,"HIGH SCORE:");
 sprintf(arr,"%d",score);
 setcolor(1);
 outtextxy(350,350,arr);


 setcolor(8);
 setlinestyle(0,1,3);
 rectangle(Z,l,206,m);

 if(kbhit())
{                                            // w = 119
 int q=getch();

 if(q==72)             // UP
{
 m-=60;
 l-=60;
 sound(300);
 delay(50);
 nosound();

 if(l<150)
{
 l=150;
 m=210;
}
 }

 if(q==80)                // DOWN
{
 m+=60;
 l+=60;
 sound(300);
 delay(50);
 nosound();

 if(m>330)
{
 m=330;
 l=270;
}
 }

 if((l==150)&&(m==210))
{
 Z=440;
 if(q==13)
 OBJECTS();
}

 if((l==210)&&(m==270))
{
 Z=398;
 if(q==13)
 MENU();
}

 if((m==330)&&(l==270))
{
 Z=288;
 if(q==13)
 exit(0);
}

delay(65);
cleardevice();
}
 }
  }

//

 void INSTRUCTIONS()
{
 clrscr();
 cleardevice();

 sound(300);
 delay(50);
 nosound();

 setbkcolor(15);

 setcolor(4);
 settextstyle(0,0,3.5);
 outtextxy(400,145,"RED");

 setcolor(12);
 settextstyle(0,0,2.5);
 outtextxy(100,200,"THEN THE GAME WILL BE OVER");

 setcolor(8);
 outtextxy(130,100,"U CAN PRESS FROM (A-Y)");
 outtextxy(25,150,"REMEBER IF U GET ANY           OBJECT");

 setcolor(1);
 settextstyle(0,0,2);
 outtextxy(8,260,"                          ");

 setcolor(8);
 settextstyle(0,0,2);
 outtextxy(60,350,"PRESS (ENTER) OR (ESC) TO RETURN");

 getch();

 sound(300);
 delay(50);
 nosound();

 MENU();
}

//

 void OBJECTS()
{
 cleardevice();
 setlinestyle(0,1,1);
 setbkcolor(0);
 int score=0;

 for(;;)
{
 setcolor(WHITE);          //LINE BELOW BASE
 line(0,46,639,46);
 setcolor(WHITE);          //LINE ABOVE BASE
 line(0,449,639,449);

 setcolor(WHITE);          //DIVIDER L1 (Vertical)
 line(128,46,128,449);

 setcolor(WHITE);          //DIVIDER L2 (Vertical)
 line(256,46,256,449);

 setcolor(WHITE);          //DIVIDER L3 (Vertical)
 line(384,46,384,449);

 setcolor(WHITE);          //DIVIDER L4 (Vertical)
 line(512,46,512,449);

///////////////////////////////////////////////////////////////

 setcolor(WHITE);          //DIVIDER L1 (Horizontal)
 line(0,126.6,640,126.6);

 setcolor(WHITE);          //DIVIDER L1 (Horizontal)
 line(0,207.2,640,207.2);

 setcolor(WHITE);          //DIVIDER L1 (Horizontal)
 line(0,287.8,640,287.8);

 setcolor(WHITE);          //DIVIDER L1 (Horizontal)
 line(0,368.4,640,368.4);

//////////////////////////////////////////////////////////////////

 setfillstyle(SOLID_FILL,LIGHTGRAY);      // TOP GROUND
 bar(0,0,640,45);

 setfillstyle(SLASH_FILL,DARKGRAY);      // BASE GROUND
 bar(0,450,640,600);

 setcolor(14);
 circle(170,464,10);
 settextstyle(0,0,1.5);
 outtextxy(167,461,"C");

 setcolor(14);
 settextstyle(0,0,2);
 outtextxy(190,457,"ALL RIGHTS RESERVED");


 setcolor(14);
 settextstyle(0,0,2);
 outtextxy(250,15,"SCORE =");

 char arr[50];
 settextstyle(0,0,2);
 sprintf(arr,"%d",score);
 outtextxy(378,15,arr);

 score++;
 int hs=score;

 if(kbhit())
{
 int k=getch();

 if(k==106)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,YELLOW);       //OBJ TYPE 1  (a)
 bar3d(554,230,596,263,4,20);
}

 if(k==116)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,RED);       //(b)
 bar3d(170,391,212,424,4,20);

 delay(350);
 gameover(score);
}

if(k==105)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,YELLOW);       //(c)
 bar3d(426,391,469,424,4,20);
}

if(k==115)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,GREEN);       //(d)
 bar3d(298,149,340,182,4,20);
}

if(k==107)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,YELLOW);       //(e)
 bar3d(42,149,86,182,4,20);
}

if(k==99)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,MAGENTA);       //(f)
 bar3d(42,310,86,343,4,20);
}

 if(k==121)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,LIGHTBLUE);       //OBJ TYPE 2 (a)
 pieslice(64,405,0,270,20);
}

if(k==104)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,RED);       //(b)
 pieslice(448,163,0,270,20);

 delay(350);
 gameover(score);
}

 if(k==100)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,GREEN);       //(c)
 pieslice(448,324,0,270,20);
}

 if(k==114)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,YELLOW);       //(d)
 pieslice(192,324,0,270,20);

}

 if(k==97)
{
  setcolor(WHITE);
 setfillstyle(SOLID_FILL,MAGENTA);       //(e)
 pieslice(192,82,0,270,20);

}

 if(k==119)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,LIGHTCYAN);       //OBJ Type 3 (a)
 bar3d(436,227,449,270,4,20);
}

 if(k==103)
{
  setcolor(WHITE);
 setfillstyle(SOLID_FILL,RED);       //(b)
 bar3d(564,388,577,431,4,20);

 delay(350);
 gameover(score);
}

 if(k==113)
{
  setcolor(WHITE);
 setfillstyle(SOLID_FILL,BLUE);       //(c)
 bar3d(308,66,321,109,4,20);

}

if(k==108)
{
   setcolor(WHITE);
 setfillstyle(SOLID_FILL,MAGENTA);       //OBJ Type 4 (a)
 pieslice(576,323,0,360,20);
}

 if(k==102)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,RED);       //(b)
 pieslice(576,82,0,360,20);

 delay(350);
 gameover(score);
}

 if(k==120)
{
    setcolor(WHITE);
 setfillstyle(SOLID_FILL,YELLOW);       //(c)
 pieslice(448,82,0,360,20);
}

 if(k==118)
{
    setcolor(WHITE);
 setfillstyle(SOLID_FILL,CYAN);       //(d)
 pieslice(320,243,0,360,20);
}

 if(k==98)
{
    setcolor(WHITE);
 setfillstyle(SOLID_FILL,GREEN);       //(e)
 pieslice(320,404,0,360,20);
}

 if(k==112)
{
    setcolor(WHITE);
 setfillstyle(SOLID_FILL,LIGHTBLUE);       //(f)
 pieslice(192,162,0,360,20);
}

 if(k==117)
{
    setcolor(WHITE);
 setfillstyle(SOLID_FILL,RED);       //(g)
 pieslice(64,243,0,360,20);

 delay(350);
 gameover(score);
}

 if(k==111)
{
    setcolor(WHITE);
 setfillstyle(SOLID_FILL,GREEN);       //(h)
 pieslice(64,82,0,360,20);
}

 if(k==109)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,LIGHTCYAN);       //OBJ Type 5 (a)
 bar3d(534,161,616,174,4,20);
}

 if(k==101)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,RED);       //(b)
 bar3d(278,322,360,335,4,20);

 delay(350);
 gameover(score);
}

  if(k==110)
{
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,GREEN);       //(c)
 bar3d(150,242,232,255,4,20);
}
/////////////////////FOR EXIT////////////////////////////////////////
 if(k==27)
{ MENU(); }
 }  
     }  
         }
