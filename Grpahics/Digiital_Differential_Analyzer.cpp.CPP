#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{ float x1,x2,y1,y2;  //Cordinates of point P1 and P2
  float dx,dy; //dx & dy denotes change in x and change in y respectivley
  float steps; //steps denote number of points we have to calculate
  float X,Y; //X & Y denotes points to be plotted
  int gd=DETECT,gm;
  float incx,incy;// Denotes Increment in X & Y respectivley
  clrscr();
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"..\\bgi");
  printf("\n Enter coordinates of point 1(X1,Y1) ");
  scanf("%f%f",&x1,&y1);
  printf(" Enter coordinates of point 2(X2,Y2) ");
  scanf("%f%f",&x2,&y2);
  dy=y2-y1;
  dx=x2-x1;
  if(dx>dy)
  steps=dx;
  else
  steps=dy;
  incx=dx/steps;
  incy=dy/steps;
  X=x1;
  Y=y1;
  putpixel(X,Y,WHITE);
  while(steps>0)
  {  X=X+incx;
     Y=Y+incy;
     putpixel(int(X+0.5),int(Y+0.5),WHITE);
     steps--;
  }
  getch();
  closegraph();
  return 0;
}

