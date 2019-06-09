//Program to implement Counting sort
#include<stdio.h>
#include<cstdlib>
#include<time.h>
#define size 100
#define range 500
int main()
{
    void countingsort(int *,int);
    int arr[size],i;
    srand(time(NULL));
    printf("\n Array Before Sorting Is -");
    for(i=0;i<size;i++)
        {
            arr[i]=rand()%range;
            printf(" %d ",arr[i]);
        }
    countingsort(arr,size);
    return 0;
}
void countingsort(int arr[],int m)
{
    int counting[range],i;
    int finalarr[m+1];
    for(i=0;i<range;i++)
        counting[i]=0;
    for(i=0;i<m;i++)
        counting[arr[i]]=counting[arr[i]]+1;
    for(i=1;i<range;i++)
        counting[i]=counting[i]+counting[i-1];
    for(i=m-1;i>=0;i--)
    {
        finalarr[counting[arr[i]]]=arr[i];
        counting[arr[i]]=counting[arr[i]]-1;
    }
    printf("\n Array After Sorting Is - ");
    for(i=1;i<m+1;i++)
        printf(" %d ",finalarr[i]);
}


