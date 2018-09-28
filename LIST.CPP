#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{ int info;
  struct node *next;
};
typedef struct node* Node;
Node start=NULL;
int main()
{ clrscr();
  Node insertaftloc(Node);
  Node insertbefloc(Node);
  Node insertbeg(Node);
  Node delbeg(Node);
  Node delend(Node);
  Node delmid(Node);
  Node insertend(Node);
  Node reverse(Node);
  Node middle(Node);
  void display(Node);
  int i;
  char choice;
  printf(" Select operation which you want to perform \n");
  printf(" 1 for insertion at beginning \n");
  printf(" 2 for insertion at end \n");
  printf(" 3 for insertion at any specified position \n");
  printf(" 4 for deletion at beginning \n");
  printf(" 5 for deletion at end \n");
  printf(" 6 for deletion at any specified position \n");
  printf(" 7 for reversal \n");
  printf(" 8 for finding midddle node \n\n\n");
  scanf("%d",&i);
  clrscr();
  switch(i)
  { case 1: start=insertbeg(start);
	    display(start);
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 2: start=insertend(start);
	    display(start);
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 3: start=insertbefloc(start);
	    display(start);
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 4: start=delbeg(start);
	    display(start);
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 5: start=delend(start);
	    display(start);
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 6: start=delmid(start);
	    display(start);
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 7: start=reverse(start);
	    display(start);
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 8: start=middle(start);
	    display(start);
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
   default: printf(" Invalid Option Selcted \n");
  }
getch();
return 0;
}
Node insertbeg(Node head)
{  struct node *ptr;
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
Node insertend(Node head)
{  struct node *ptr,*temp;
   ptr=(struct node *)malloc(sizeof(node));
   int item;
   printf(" Enter the data to insert at end : ");
   scanf("%d",&item);
   ptr->info=item;
   ptr->next=NULL;
   temp=head;
   while(temp->next!=NULL)
   temp=temp->next;
   temp->next=ptr;
   return head;
}
Node insertbefloc(Node head)
{  struct node *ptr,*temp,*pretemp;
   ptr=(struct node *)malloc(sizeof(node));
   int item,pos,i=1;
   printf(" Enter the position : ");
   scanf("%d",&pos);
   printf(" Enter the data to insert at position %d : ",pos);
   scanf("%d",&item);
   ptr->info=item;
   temp=head;
   while(i<pos)
   {
     pretemp=temp;
     temp=temp->next;
     i++;
   }
   ptr->next=pretemp->next;
   pretemp->next=ptr;
   return head;
}
Node insertaftloc(Node head)
{  struct node *ptr,*temp,*pretemp;
   ptr=(struct node *)malloc(sizeof(node));
   int item,pos,i=1;
   printf(" Enter the position : ");
   scanf("%d",&pos);
   printf(" Enter the data to insert at position %d : ",pos);
   scanf("%d",&item);
   ptr->info=item;
   temp=head;
   while(i<pos)
   {
     temp=temp->next;
     i++;
   }
   ptr->next=temp->next;
   temp->next=ptr;
   return head;
}
Node delbeg(Node head)
{ struct node *ptr;
  if(head==NULL)
  printf(" Underflow \n");
  else
 { ptr=head;
   head=ptr->next;
   printf(" First element deleted successfully \n");
   printf(" Deleted Element is %d and Its Address is %u \n",ptr->info,ptr);
   free(ptr);
 }
 return head;
}
Node delend(Node head)
{ struct node *ptr,*temp;
  if(head==NULL)
  printf(" Underflow \n");
  else
  { ptr=temp=head;
    while(ptr->next!=NULL)
    { temp=ptr;
      ptr=ptr->next;
    }
    temp->next=ptr->next;
    printf(" Last element deleted successfully \n");
    printf(" Deleted Element is %d and Its Address is %u \n",ptr->info,ptr);
    free(ptr);
  }
  return head;
}
Node delmid(Node head)
{ struct node *ptr,*temp;
  int pos,i=1;
  if(head==NULL)
  printf(" Underflow \n");
  else
  { printf(" Enter the position where you want to delete : ");
    scanf("%d",&pos);
    ptr=temp=head;
    while(i<pos)
    { i++;
      temp=ptr;
      ptr=ptr->next;
    }
    temp->next=ptr->next;
    printf(" Element no %d deleted sucessfully \n",pos);
    printf(" Deleted Element is %d and Its Address is %u \n",ptr->info,ptr);
    free(ptr);
  }
  return head;
}
Node reverse(Node head)
{ struct node *ptr,*before,*after;
  ptr=head;
  before=NULL;
  while(ptr!=NULL)
  { after=ptr->next;
    ptr->next=before;
    before=ptr;
    ptr=after;
  }
  head=before;
  return head;
}
Node middle(Node head)
{ struct node *fast,*slow;
  int i=0;
  fast=slow=head;
  while(fast!=NULL)
  { slow=slow->next;
    i++;
    fast=fast->next->next;
  }
  printf(" Middle node is %d & Data at middle node is %d \n",i,slow->info);
  return head;
}
void display(Node head)
{  struct node *ptr;
   ptr=(struct node *)malloc(sizeof(node));
   ptr=head;
   int i=1;
   printf(" Starting Address is %u \n",head);
   while(ptr!=NULL)
   { printf(" Element no %d :Info : %d Address of element : %u Address stored in next : %u \n",i,ptr->info,ptr,ptr->next);
     ptr=ptr->next;
     i=i+1;
   }
}
