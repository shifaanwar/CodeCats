//Ques- Write a program in C to find the prime numbers within a range of numbers

#include <stdio.h>
int main()
{
    int num1,num2,i,j,temp;
    printf("Enter the range of number");
    scanf("%d",&num1);
    scanf("%d",&num2);
    for(i=num1;i<=num2;i++)
    {
        temp=0;
        if(i==0||i==1)
        continue;
     for(j=2;j<=i/2;j++)
     {
         if(i%j==0)
         {
         temp=1;
         break;
         }
     }
         if(temp==0)
         printf("%d ",i);
     }
    }
