// Program to find Middle node of a link list
// Function search() finds middle of list.
// Here for convenience link list is created using array of structure.
#include <cstdlib>
#include<stdio.h>
#include <string>
using namespace std;
struct node
{
   int info;
   struct node *next;
}arr[]={{1,arr+1},{2,arr+2},{3,arr+3},{4,arr+4},{5,arr+5},{6,arr+6},{7,arr+7},{8,arr+8},{9,NULL}};
typedef struct node * Node;
int search(Node,int);
int main()
{
  system("cls");
  int position,element;
  printf(" Enter element to search in list ");
  scanf("%d",&element);
  position=search(arr,element);
  if(position==-1)
    printf(" %d is not in the list \n",element);
  else
    printf(" %d is in list at position %d \n",element,position);
   system("pause");
}
int search(Node head,int element)
{ Node ptr;
  int pos=1;
  ptr=head;
  while(ptr!=NULL)
  {   if(ptr->info==element)
         return pos;
      ptr=ptr->next;
      pos++;
  }
  return -1;
}
