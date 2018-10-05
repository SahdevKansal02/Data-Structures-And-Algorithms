//Cycle Detection Using Floyd Algorithm  O(n)
// Function cycledetection() tell us whether there is a cycle in given list or not.
// Function firstloopingnode() tell us where the cycle starts.
// Here for convenience link list is created using array of structure.
#include<stdio.h>
#include<cstdio>
#include<stdlib.h>
using namespace std;
struct node
{
    int info;
    struct node * next;
}arr[]={{12,arr+1},{13,arr+2},{14,arr+3},{15,arr+4},{16,arr+1}};
typedef struct node * Node;

int main()
{
    system("cls");
    Node cycledetection(Node);
    void firstloopingnode(Node);
    cycledetection(arr);
    firstloopingnode(arr);
    system("pause");
    return 0;
}

Node cycledetection(Node head)
{
    Node fast,slow;
    fast=slow=head;
    while(fast!=NULL&&slow!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            printf(" Cycle Detected \n ");
            return fast;
            break;
        }
    }
    return NULL;
}

void firstloopingnode(Node head)
{
    Node fast=cycledetection(head);
    if(fast==NULL)
        printf(" No Cycle Detected \n");
    else
   {
     Node slow=head;
     int i=1;
     while(fast!=slow)
     {
        fast=fast->next;
        slow=slow->next;
        i++;
     }
     printf(" Cycle begins at %d Info : %d Address : %u",i,fast->info,fast);
   }
}
