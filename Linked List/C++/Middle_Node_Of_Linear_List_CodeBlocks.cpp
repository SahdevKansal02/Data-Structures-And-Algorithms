// Program to find Middle node of a link list
// Function mergingoint() finds middle of list.
// Here for convenience link list is created using array of structure.
#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;
struct node
{
   int info;
   struct node *next;
}arr[]={{1,arr+1},{2,arr+2},{3,arr+3},{4,arr+4},{5,arr+5},{6,arr+6},{7,arr+7},{8,arr+8},{9,NULL}};
typedef struct node * Node;
void mergingnode(Node);
int main()
{
  int a;
  //printf(" Hello %d %u Sahdev %u",a,&a);
  mergingnode(arr);

}
void mergingnode(Node head)
{ Node ptr;
  int length=1,middle,temp;
  int i;
  ptr=head;
  while(ptr!=NULL)
  {   ptr=ptr->next;
      length++;
  }
  middle=(length/2)+0.5;
  temp=middle;
  ptr=head;
  for(i=1;i<temp;i++)
  {
      ptr=ptr->next;
  }
  printf(" Middle  is %d Element is %d is %u ",middle,ptr->info,ptr);
}


