//Ques1 from week2

#include<stdio.h>
int main()
{
   int num ,i,sum = 0,even_sum=0,odd_sum=0;
    printf("Enter the range for numbers\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d ",i);
        sum+=i;
        if(i&1)
        odd_sum+=i;
        else
        even_sum+=i;
    }
    printf("\nsum of natural numbers upto %d is %d",num,sum);
    printf("\nsum of even natural number upto %d is %d",num,even_sum);
    printf("\nsum of odd natural numbers upto %d is %d",num,odd_sum);

}
