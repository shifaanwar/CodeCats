
#include <stdio.h>

int main()
{
    int size;
    printf("Size of Array: ");
    scanf("%d", &size);
    int arr[size],max=arr[0],hash[9]={0};
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if(max<arr[i])
        { max=arr[i];}
        hash[arr[i]]++;
    }

     for(int i=1;i<=max;i++)
     {
         printf("%d : %d\n",i,hash[i]);
     }
}