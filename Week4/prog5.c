#include<stdio.h>
int main()
{
    int size,count[3]={0,0,0};
    scanf("%d",&size);
    int arr[size],store[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        count[arr[i]]++;
    }
    for(int i=0;i<size;i++)
    {
        if(count[0])
        {
            store[i] = 0;
            count[0]--;
        }
        else if(count[1])
        {
            store[i]=1;
            count[1]--;
        }
        else
        {
            store[i]=2;
            count[2]--;
        }
    }
for(int i=0;i<size;i++)
printf("%d ",store[i]);

}