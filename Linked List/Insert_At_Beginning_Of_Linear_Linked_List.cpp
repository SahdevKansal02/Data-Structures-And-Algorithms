//Program to insert data at beginning of linked list and then display it.
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
Node insertbeg(Node);//Function to perform insertion at beginning of list
int main()
{
     int choice;
     system("cls");
     start=insertbeg(start);
     display(start);
     printf(" Do You Want To Insert Again ? (1/0) ");
     scanf("%d",&choice);
     if(choice==1)
        main();
     system("pause");
}
Node insertbeg(Node head)
{   struct node *ptr;
    ptr=(struct node *)malloc(sizeof(node));
    int item;
    printf(" Enter the data to insert at beginning : ");
    scanf("%d",&item);
    ptr->info=item;
    if(head==NULL)
      ptr->next=NULL;
    else
      ptr->next=head;
    head=ptr;
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
