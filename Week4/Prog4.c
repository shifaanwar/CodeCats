#include<stdio.h>
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
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if((arr[i]+arr[j])==target)
            printf("[%d,%d]",i,j);
        }
    }

}