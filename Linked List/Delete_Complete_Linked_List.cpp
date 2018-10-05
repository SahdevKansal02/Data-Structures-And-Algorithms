#include<stdio.h>
#include<cstdlib>
using namespace std;
struct node
{
    int info;
    struct node *next;
}*start=NULL;
typedef  struct node * Node;
Node deletewholelist(Node);
Node insertbeg(Node);
void display(Node);
int main()
{
    system("cls");
    start=insertbeg(start);
    start=insertbeg(start);
    start=insertbeg(start);
    start=insertbeg(start);
    start=insertbeg(start);
    printf(" Before Deletion \n");
    display(start);
    printf(" After Deletion \n");
    start=deletewholelist(start);
    display(start);
    system("pause");
    return  0;
}
Node deletewholelist(Node head)
{
    Node temp;
    while(head!=NULL)
    {
       temp=head;
       head=head->next;
       free(temp);
    }
   return head;
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
     if(head==NULL)
     {
         printf(" Empty List \n");
         return;
     }
     ptr=head;
     int i=1;
     printf(" Starting Address is %u \n",head);
     while(ptr!=NULL)
     {   printf(" Element no %d :Info : %d Address of element : %u Address stored in next : %u \n",i,ptr->info,ptr,ptr->next);
         ptr=ptr->next;
         i=i+1;
     }
}
