//Ques-7 from Week3

#include<stdio.h>
int main()
{
    int num,max,min,i,j,temp;
      printf("Enter the no of element in array\n");
    scanf("%d",&num);
     int arr[num];
     for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
             temp = arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
            }
        }
    }
    printf("Max is %d\n",arr[num-1]);
    printf("min is %d\n",arr[0]);
    printf("Second_Max is %d\n",arr[num-2]);
    printf("Second_min is %d",arr[1]);
    return 0;
}