/*Program to print the linked list in reverse order without actual reversing the
 list and without consuming extra Memory */
//Backward Traversal Of Linked List
//Time Complexity -O(n^2)
#include<stdio.h>
#include<cstdlib>
#include<time.h>
#define size 10 //Size of list
struct node
{
    int info;
    struct node * next;
};
typedef struct node* Node;
Node start;
int main()
{
   int i;
   srand(time(NULL));
   for(i=0;i<size;i++)
   {
      Node ptr;
      ptr=(Node)malloc(sizeof(node));
      ptr->info=rand()%100; //random list is created of given size.
      ptr->next=NULL;
      if(start==NULL)
        start=ptr;
      else
      {
         ptr->next=start;
         start=ptr;
      }

   }
printf(" Traversal of Linked List in forward direction -\n");
Node temp=start;
while(temp!=NULL)
{
    printf(" %d ",temp->info);
    temp=temp->next;
}
printf("\n Traversal of Linked List in backward direction -\n");
Node ptr=NULL;
while(ptr!=start)
{
    temp=start;
    while(temp->next!=ptr)
        temp=temp->next;
    printf(" %d ",temp->info);
    ptr=temp;
}
return 0;
}
