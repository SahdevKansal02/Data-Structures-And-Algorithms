//MidPoint Circle Drawing Algorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{ int xc,yc,r;//xc is xcenter,yc is ycenter and r is radius.
  int p;// p is decision parameter.
  int gd=DETECT,gm;
  int X,Y;
  void plot(int,int,int,int);
  clrscr();
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"..\\bgi");
  printf(" Enter Co-Ordinates Of Center ");
  scanf("%d %d",&xc,&yc);
  printf("\n Enter Radius Of Circle ");
  scanf("%d",&r);
  X=0;
  Y=r;
  plot(X,Y,xc,yc);
  p=5/4-r;
  while(X<=Y)
  { if(p<0)
    {   X++;
	plot(X,Y,xc,yc);
	p=p+2*X+1;
    }
    else
    {   X++;
	Y--;
	plot(X,Y,xc,yc);
	p=p+(2*X)+1-(2*Y);
    }
  }
  getch();
  return 0;
}
void plot(int X,int Y,int xc,int yc)
{  putpixel(xc+X,yc+Y,WHITE);
   putpixel(xc-X,yc+Y,WHITE);
   putpixel(xc+X,yc-Y,WHITE);
   putpixel(xc-X,yc-Y,WHITE);
   putpixel(xc+Y,yc+X,WHITE);
   putpixel(xc-Y,yc+X,WHITE);
   putpixel(xc+Y,yc-X,WHITE);
   putpixel(xc-Y,yc-X,WHITE);
}