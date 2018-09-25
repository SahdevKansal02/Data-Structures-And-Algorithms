#include<stdio.h>
#include<conio.h>
int main()
{ int arr[100],i,n,pos,el,count=0;
clrscr();
printf("\n Enter Size Of Array ");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("\n Enter Element %d : ",i);
  scanf("%d",&arr[i]);
}
printf("\n\n Enter Element Which You Want To Search ");
scanf("%d",&el);
for(i=0;i<n;i++)
{ if(arr[i]==el)
  { count++;
    break;
  }
}
if(count==0)
printf("\n %d Is Not Present In Array ",el);
else
printf("\n %d Is Present In Array At Position %d ",el,i);
getch();
return 0;
}