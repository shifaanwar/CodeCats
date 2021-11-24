
#include<stdio.h>
void rotateArrayByOne(int arr[],int size)
{
   int last=arr[size-1];
for(int i=size-1;i>0;i--)
arr[i]=arr[i-1];
arr[0]=last;
}
void rotateArray(int arr[],int size,int k)
{
for(int i=0;i<k;i++)
{
    rotateArrayByOne(arr,size);
}
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
}
int main()
{
int size,k;
scanf("%d",&size);
scanf("%d",&k);
int arr[size];
for(int i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
rotateArray(arr,size,k);
printArray(arr,size);

}
