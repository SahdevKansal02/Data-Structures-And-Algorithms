//Program to sort an array using pancake sort.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 15 //Size of array.
void flip(int *,int,int *); //Function to flip the array
int maxelement(int *,int);//Function to find location of largest element.
int checksort(int *,int);//Function to check whether array is sorted or not.
void pancakesort(int *,int);//Function to perform pancake sort.
int main()
{
    int *arr,i;
    arr=(int *)malloc(sizeof(int) * n);
    srand(time(NULL));
    printf(" Array Before Sorting Is - \n");
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%100;
        printf(" %d ",arr[i]);
    }
    printf("\n Array After Sorting Is - \n");
    pancakesort(arr,n);
    for(i=0;i<n;i++)
        printf(" %d ",arr[i]);
}
void flip(int arr[],int index,int *numflip)
{
    if(index==0)
        return;
    int start=0;
    (*numflip)++;
    while(index>start)
    {
        arr[index]=arr[index]+arr[start];
        arr[start]=arr[index]-arr[start];
        arr[index]=arr[index]-arr[start];
        start++;
        index--;
    }
}

int maxelement(int arr[],int lastindex)
{
    int max=0;
    for(int i=0;i<=lastindex;i++)
    {
        if(arr[i]>arr[max])
            max=i;
    }
    return max;
}
int checksort(int arr[],int size)
{
    int m=1;
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
           { m=0;
             return m;
           }
    }
    return m;
}

void pancakesort(int arr[],int size)
{
    int maximum;
    int numflip=0,m;
    for(int i=size-1;i>0;i--)
    {
        m=checksort(arr,size);
        if(m==1)
            break;
        maximum=maxelement(arr,i);
        flip(arr,maximum,&numflip);
        flip(arr,i,&numflip);
    }
    printf("\n Total number of flips are %d \n",numflip);
}
