// Program to find Middle node of a link list
// Function length() finds length of list through iteration.
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
void length(Node);
int main()
{
  system("cls");
  length(arr);
  system("pause");
}
void length(Node head)
{ Node ptr;
  int length=1;
  ptr=head;
  while(ptr->next!=NULL)
  {   ptr=ptr->next;
      length++;
  }
  printf(" Length of list is %u \n ",length);
}


