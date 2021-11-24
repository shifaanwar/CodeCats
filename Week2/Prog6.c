//Ques-6 from week2

#include<stdio.h>
int main()
{
    int number,power,i,result=1;
    printf("Enter the number and power\n");
    scanf("%d %d",&number,&power);
    if(power==0)
    {
    printf("%d ^ %d = 1",number,power);
    }
    else
    {
    for(i=1;i<=power;i++)
    {
        result*=number;
    }
    printf("%d ^ %d = %d ",number,power,result);
    }
}