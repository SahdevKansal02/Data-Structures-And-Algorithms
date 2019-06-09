// Program to find Middle node of a link list
// Function lastnnode() finds nth node of list from end.
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
void lastnnode(Node);
int main()
{
  system("cls");
  int a;
  lastnnode(arr);
  system("pause");
}
void lastnnode(Node head)
{ Node ptr;
  int n,i=1,length=1;
  ptr=head;
  while(ptr!=NULL)
  {
      ptr=ptr->next;
      length++;
  }
  printf(" Enter the node which you have to find from end ");
  scanf("%d",&n);
  if(n<0||n>length)
    printf(" Invalid Input \n");
  else
  { ptr=head;
    while(i<(length-n))
   {   ptr=ptr->next;
       i++;
   }
   printf(" At %d node from end Element is %d its address is %u \n",n,ptr->info,ptr);
  }
}



