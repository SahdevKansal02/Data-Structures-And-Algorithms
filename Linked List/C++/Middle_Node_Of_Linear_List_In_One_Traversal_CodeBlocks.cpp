// Program to find Middle node of a link list in One Traversal
#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
struct node
{
   int info;
   struct node *next;
}arr[]={{1,arr+1},{2,arr+2},{3,arr+3},{4,arr+4},{5,arr+5},{6,arr+6},{7,arr+7},{8,arr+8},{9,NULL}};
typedef struct node * Node;
void Middlenode(Node);
int main()
{
  system("cls");
  Middlenode(arr);
  system("pause");

}
void Middlenode(Node arr)
{ Node fast,slow;
  int i=1;
  fast=slow=arr;
  while(fast->next!=NULL&&(fast->next->next)!=NULL)
  { fast=fast->next->next;
    slow=slow->next;
    i++;
  }
  printf(" Middle Node is %d Element is %d Address is %u \n",i,slow->info,slow);
}


