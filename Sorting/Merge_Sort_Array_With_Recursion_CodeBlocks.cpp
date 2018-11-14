// Program to sort an array using merge sort.
#include<stdio.h>
#include<cstdio>
#include<time.h>
#include<stdlib.h>
#define n 6 //Size of array
void mergesort(int *,int,int);
void merge(int *,int,int,int);
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
    mergesort(arr,0,n-1);
    for(i=0;i<n;i++)
        printf(" %d ",arr[i] );
    return 0;
}
void mergesort(int *arr,int start,int end)
{
     int middle=(start+end)/2;
     if(end>start)
     {
         mergesort(arr,start,middle);
         mergesort(arr,middle+1,end);
         merge(arr,start,middle,end);
     }
}
void merge(int *arr,int start,int middle,int end)
{
     int size=end-start+1;
     int temp[n];
     int i=start;
     int j=middle+1;
     int k=start;
     while((i<=middle)&&(j<=end))
     {
         if(arr[i]<=arr[j])
            {
              temp[k]=arr[i];
              i++;
            }
         else if (arr[i]>arr[j])
            {
              temp[k]=arr[j];
              j++;
            }
     k++;
     }
     if(i>middle)
     {
         while(j<=end)
         {
             temp[k]=arr[j];
             j++;
             k++;
         }
     }
     if(j>end)
     {
         while(i<=middle)
         {
             temp[k]=arr[i];
             i++;
             k++;
         }
     }

 for(i=start;i<k;i++)
       arr[i]=temp[i];
}

