//Cycle Detection Without Using Floyd Algorithm
//Time complexity is O(n^2)
// Function detection() tell us where the cycle starts.
// Here for convenience link list is created using array of structure.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<cstdio>
using namespace std;
struct node
{ int data;
  struct node *next;
}arr[5]={{12,arr+1},{13,arr+2},{14,arr+3},{15,arr+4},{16,arr+2}};
typedef struct node* nnode;
int main()
{ system("cls");
  void display();
  void detection();
  display();
  printf("\n\n\n");
  detection();
  printf("Hello");
  system("pause");
  return 0;
}
void display()
{ int i;
  for(i=0;i<5;i++)
  printf(" Element : %d Data : %d Address : %u Next : %u \n",i,arr[i].data,arr+i,arr[i].next);
}
void detection()
{ printf(" We are detecting \n");
  struct node *temp,*ptr;
  int i=0,j;
  ptr=arr;
  while(i<5)
  { temp=ptr->next;
    i++;
    j=i;
    while(j<5)
    { if(temp->next==ptr)
      { printf(" Cycle begins at %d ",i);
	break;
      }
      temp=temp->next ;
      j++;
    }
    ptr=ptr->next;
  }
}
