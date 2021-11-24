//Ques-6 from Week3
#include<stdio.h>
int main()
{
    int num,choice,counter=0;
    printf("Enter the no of element in array\n");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number whose occurence you want to count\n");
    scanf("%d",&choice);
    for(int i=0;i<num;i++)
    {
        if(arr[i]==choice)
        counter++;
    }
    printf("%d",counter);
}