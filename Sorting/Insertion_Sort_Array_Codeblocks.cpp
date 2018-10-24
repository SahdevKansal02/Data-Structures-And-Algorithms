//Program to sort an array using insertion sort.
#include<stdio.h>
#include<conio.h>
#include<cstdlib>
#include<time.h>
int n=6;
int main()
{
    int arr[n];
    printf(" Before Sorting Array is \n");
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100;
        printf(" %d ",arr[i]);
    }
    printf("\n");
    printf("\n\n After Sorting by insertion sort Array is \n");
    void insertionsort(int *,int);
    insertionsort(arr,5);
    for(int i=0;i<5;i++)
    {
      printf(" %d ",arr[i]);
    }
}
void insertionsort(int *arr,int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp=arr[i];
        j=i-1;
        while(temp<=arr[j]&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
