// Program to check wether given list is pallindrome or not without storing it anywhere else.
// Function pallindrome() tell us where the list is pallindrome or not.
// Here for convenience link list is created using array of structure.
// Time Complexity : O(n)
// Space Complexity : O(1)
/* For checking wether list is pallindrome or not we first find out the middle node,then reverse
   the list after the middle node and then comapare first half of list with second half */
#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
struct node
{
   int info;
   struct node *next;
}arr[]={{1,arr+1},{2,arr+2},{3,arr+3},{4,arr+4},{5,arr+5},{4,arr+6},{3,arr+7},{2,arr+8},{1,NULL}};
typedef struct node * Node;
int pallindrome(Node);
int main()
{
  system("cls");
  int num=pallindrome(arr);
  if(num==1)
    printf(" List Is Not A Pallindrome \n");
  else
    printf(" List Is Pallindrome \n");

  system("pause");

}
int pallindrome(Node head)
{ Node temp,fast,middle,preptr,ptr;
  int i=1;
  fast=middle=head;
  while(fast->next!=NULL&&(fast->next->next)!=NULL)
  { fast=fast->next->next;
    middle=middle->next;
    i++;
  }

  fast=middle->next;
  preptr=NULL;
  while(fast!=NULL)
  {
     ptr=fast->next;
     fast->next=preptr;
     preptr=fast;
     fast=ptr;
  }
  temp=head;
  while(temp!=middle)
  {
      if(temp->info!=preptr->info)
      {
          return 1;
          break;
      }
      temp=temp->next;
      preptr=preptr->next;

  }
    return 0;
}



