#include<stdio.h>
int binarySearch(int arr[],int left,int right,int target)
{
while(left<=right)
{
    int mid =left+(right-left)/2;
    if(arr[mid]==target)
    return mid;
    else if(arr[mid]<target)
    left = mid+1;
    else
    right = mid-1;
}
return left;
}
int main()
{
    int size,target;
    scanf("%d",&size);
    scanf("%d",&target);
    int arr[size];

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
int result = binarySearch(arr,0,size-1,target);
printf("found at position %d",result);
}