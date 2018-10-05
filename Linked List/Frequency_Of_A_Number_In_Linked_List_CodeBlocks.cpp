// Program to find Middle node of a link list
// Function  frequency() finds frequency of a element in list through iteration.
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
void frequency(Node);
int main()
{
  system("cls");
  frequency(arr);
  system("pause");
}
void frequency(Node head)
{ Node ptr;
  int length=1,element,count=0;
  printf(" Enter the element whose frequency you want to find ");
  scanf("%d",&element);
  ptr=head;
  while(ptr->next!=NULL)
  {   if(ptr->info==element)
         count++;
      ptr=ptr->next;
  }
  printf(" Frequency of %d is %d \n ",element,count);
}


