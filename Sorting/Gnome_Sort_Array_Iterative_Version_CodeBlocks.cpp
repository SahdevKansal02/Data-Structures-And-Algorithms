//Program To Sort An Array Using Gnome Sort.
#include<stdio.h>
#include<cstdio>
#include<time.h>
#include<stdlib.h>
#define n 6 //Size of array
void gnomesort(int *,int);
int main()
{
    int i;
    int * arr;
    srand(time(NULL));
    arr = (int *)malloc(sizeof(int) * n);
    for(i = 0; i < n; ++i)
        arr[i] = rand()%100;
    printf("\n");
    printf(" Array before sorting is \n");
    for(i=0;i<n;i++)
        printf(" %d ",arr[i] );
    printf("\n Array after sorting is \n");
    gnomesort(arr,n);
    for(i=0;i<n;i++)
        printf(" %d ",arr[i] );
    return 0;
}
void gnomesort(int arr[],int m)
{
    int index=0;
    int temp;
    while(index<m)
    {
        if(index==0)
            index++;
        if(arr[index]>=arr[index-1])
            index++;
        else if(arr[index]<arr[index-1])
        {
           temp=arr[index];
           arr[index]=arr[index-1];
           arr[index-1]=temp;
           index--;
        }
    }
}
