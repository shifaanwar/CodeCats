#include<stdio.h>

void arrayReverse(int arr[],int size)
{
    int temp;
    for(int i=0;i<size/2;i++)
    {
     temp = arr[i];
     arr[i]=arr[size-i-1];
     arr[size-i-1]=temp;
    }
}
void printArray(int arr[],int size)
{
for(int i=0;i<size;i++)
printf("%d ",arr[i]);
}
int main()
{
int size ;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
arrayReverse(arr,size);
printArray(arr,size);
}