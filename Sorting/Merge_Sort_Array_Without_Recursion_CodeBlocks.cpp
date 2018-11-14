#include<stdio.h>
#include<cstdlib>
#include<time.h>
#define n 6//Size of array
void mergesort(int *,int);
void merge(int *,int,int,int);
int min(int,int);
int main()
{
    system("cls");
    int i;
    int * arr;
    srand(time(NULL));
    arr = (int *)malloc(sizeof(int) * n);
    for(i = 0; i < n; ++i)
        arr[i] = rand()%100;
    printf(" Array before sorting is \n");
    for(i=0;i<n;i++)
        printf(" %d ",arr[i] );
    printf("\n Array after sorting is \n");
    mergesort(arr,n);
    for(i=0;i<n;i++)
        printf(" %d ",arr[i] );
    return 0;
}
void mergesort(int *arr,int m)
{
    int size;
    int index;
    for(size=1;size<m-1;size=size*2)
    {
        for(index=0;index<m-1;index=index+size*2)
        {
            int middle=index+size-1;
            int endindex=min(index+2*size-1,m-1);
            merge(arr,index,middle,endindex);
        }
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
int min(int a,int b)
{
    if(a<=b)
        return a;
    else
        return b;
}
