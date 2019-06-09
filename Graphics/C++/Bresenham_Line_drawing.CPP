#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{ int x1,x2,y1,y2; //Co-ordinates of point P1 and P2
  int p; //Decision Parameter
  int steps; //Denotes total number of points that we have to calculate
  int dx,dy; //Change in x & y respectivley
  int X,Y; //Points that will be plotted
  int gd=DETECT,gm;
  clrscr();
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"..\\bgi");
  printf("\n Enter coordinates of point 1(X1,Y1) ");
  scanf("%d%d",&x1,&y1);
  printf(" Enter coordinates of point 2(X2,Y2) ");
  scanf("%d%d",&x2,&y2);
  dy=y2-y1;
  dx=x2-x1;
  p=2*dy-dx;
  if(dx>0)
  { X=x1;
    Y=y1;
    steps=dx;
  }
  else
  {  X=x2;
     Y=y2;
     steps=-dx;
  }
  putpixel(X,Y,WHITE);
  while(steps>0)
  {
   if(p<0)
   { p=p+2*dy;
     X=X+1;
   }
   else
   { p=p+2*dy-2*dx;
    X=X+1;
    Y=Y+1;
   }
 putpixel(X,Y,WHITE);
 steps--;
 }
 getch();
 closegraph();
 return 0;
}

