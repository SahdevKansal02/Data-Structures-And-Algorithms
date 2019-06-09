// Program to check whether given list is palindrome by reversing it using an array.
// Function palindrome() tell us where the list is palindrome or not.
// Here for convenience link list is created using array of structure.
// Time Complexity : O(n)
// Space Complexity : O(n)
#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
struct node
{
   int info;
   struct node *next;
}arr[]={{1,arr+1},{2,arr+2},{3,arr+3},{4,arr+4},{5,arr+5},{4,arr+6},{3,arr+7},{2,arr+8},{1,NULL}};
typedef struct node * Node;
int palindrome(Node);
int main()
{
  system("cls");
  int num=palindrome(arr);
  if(num==1)
    printf(" List Is Not A palindrome \n");
  else
    printf(" List Is Palindrome \n");

  system("pause");

}
int palindrome(Node head)
{ Node ptr;
  int arr[100];
  int i=0;
  ptr=head;
  while(ptr!=NULL)
  {
      arr[i]=ptr->info;
      ptr=ptr->next;
      i++;
  }
  i--;
  ptr=head;
  while(ptr!=NULL)
  {
      if(ptr->info!=arr[i])
         return 1;
      ptr=ptr->next;
      i--;
  }
  return 0;
}
