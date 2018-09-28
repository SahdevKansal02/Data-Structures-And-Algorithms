#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{ int info;
  struct node *next;
}*head;

int main()
{ //struct node *start=NULL;
  clrscr();
  void insertaftloc();
  void insertbefloc();
  void insertbeg();
  void delbeg();
  void delend();
  void delmid();
  void display();
  void insertend();
  void reverse();
  void middle();
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
  { case 1: insertbeg();
	    display();
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 2: insertend();
	    display();
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 3: insertbefloc();
	    display();
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 4: delbeg();
	    display();
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 5: delend();
	    display();
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 6: delmid();
	    display();
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 7: reverse();
	    display();
	    printf(" Do You Want To Continue ? (1/0) ");
	    scanf("%d",&choice);
	    if(choice==1)
	    main();
	    break;
    case 8: middle();
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
void insertbeg()
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
}
void insertend()
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
}
void insertbefloc()
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
}
void insertaftloc()
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
}
void delbeg()
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
}
void delend()
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
}
void delmid()
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
}
void reverse()
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
}
void middle()
{ struct node *fast,*slow;
  int i=0;
  fast=slow=head;
  while(fast!=NULL)
  { slow=slow->next;
    i++;
    fast=fast->next->next;
  }
  printf(" Middle node is %d & Data at middle node is %d \n",i,slow->info);

}
void display()
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
