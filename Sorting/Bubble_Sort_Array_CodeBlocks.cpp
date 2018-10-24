// Program to sort an array using bubble sort.
#include<stdio.h>
#include<conio.h>
#include<cstdlib>
#include<time.h>
int n=6;
void bubble(int *,int n);
int main()
{
    system("cls");
    int arr[n];
    int i;
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100;
        printf(" %d ",arr[i]);
    }
    printf("\n Array After Sorting Is - \n");
    bubble(arr,n);
    for(i=0;i<6;i++)
    printf(" %d ",arr[i]);

}
void bubble(int *ar,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
           if(ar[j]>ar[j+1])
           {
               temp=ar[j];
               ar[j]=ar[j+1];
               ar[j+1]=temp;
           }
       }
   }
}
