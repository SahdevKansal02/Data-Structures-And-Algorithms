//Program to insert data at End of linked list and then display it.
#include<iostream>
#include<stdio.h>
#include<cstdlib>// Use <conio.h> instead, if you are using Turbo C
#include<stdlib.h>
using namespace std;
struct node
{ int info;
  struct node *next;
};
typedef struct node* Node;
Node start=NULL;
void display(Node);//Function to perform traversal of th list
Node insertend(Node);//Function to perform insertion at beginning of list
int main()
{
     int choice;
     system("cls");
     start=insertend(start);
     display(start);
     printf(" Do You Want To Insert Again ? (1/0) ");
     scanf("%d",&choice);
     if(choice==1)
        main();
     system("pause");
}
Node insertend(Node head)
{   struct node *ptr,*temp;
    ptr=(struct node *)malloc(sizeof(node));
    int item;
    printf(" Enter the data to insert at end : ");
    scanf("%d",&item);
    ptr->info=item;
    ptr->next=NULL;
    temp=head;
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
      while(temp->next!=NULL)
           temp=temp->next;
      temp->next=ptr;
    }
    return head;
}

void display(Node head)
{    struct node *ptr;
     ptr=(struct node *)malloc(sizeof(node));
     ptr=head;
     int i=1;
     printf(" Starting Address is %u \n",head);
     while(ptr!=NULL)
     {   printf(" Element no %d :Info : %d Address of element : %u Address stored in next : %u \n",i,ptr->info,ptr,ptr->next);
         ptr=ptr->next;
         i=i+1;
     }
}
