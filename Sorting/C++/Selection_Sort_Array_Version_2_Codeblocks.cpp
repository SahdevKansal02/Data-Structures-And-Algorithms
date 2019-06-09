//Program to sort an array using selection sort.
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<time.h>
#define size 10 //Size of Array.
void selection(int *,int);
int main()
{
    int i,arr[size];
    system("cls");
    printf("\n Array before sorting is \n");
    srand(time(NULL));
    for(i = 0; i < size; i++)
       {
           arr[i] = rand()%100;
           printf(" %d ",arr[i]);
       }
    printf("\n Array after sorting by is \n");
    selection(arr,size);
    for(i=0;i<size;i++)
        printf(" %d ",arr[i]);
    printf("\n");
    system("pause");
}

void selection(int *arr,int n)
{
  int i,j,index,temp;
  for(i=n-1;i>=0;i--)
  {
      j=i;
      index=j;
      while(j>=0)
      {
          if(arr[j]>arr[index])
                index=j;
          j--;
      }
    temp=arr[i];
    arr[i]=arr[index];
    arr[index]=temp;
  }
}
