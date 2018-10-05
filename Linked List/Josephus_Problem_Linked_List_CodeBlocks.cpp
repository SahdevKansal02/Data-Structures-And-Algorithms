#include<iostream>
#include<stdio.h>
#include<cstdlib>// Use <conio.h> instead, if you are using Turbo C
#include<stdlib.h>
using namespace std;
struct node
{ int info;
  struct node *next;
}arr[]={{1,arr+1},{2,arr+2},{3,arr+3},{4,arr+4},{5,arr}};
typedef struct node* Node;
void josephus(Node);
int main()
{
    system("cls");
    josephus(arr);
    system("pause");
}
void josephus(Node head)
{
    Node ptr,temp;
    int length=1,position,i;
    ptr=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
        length++;
    }
    ptr=head;
    printf(" Enter the position at which element should get eliminated ");
    scanf("%d",&position);
    while(length>1)
    {
        i=1;
        while(i<position)
            {
                ptr=ptr->next;
                i++;
            }
        temp=ptr;
        ptr=ptr->next;
        free(temp);
        length--;
    }
   printf("\n Last Element Left is %d Its address is %u \n",ptr->info,ptr);
}


