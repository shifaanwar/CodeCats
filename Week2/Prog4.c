<<<<<<< HEAD
//Ques-4 from week2

#include<stdio.h>
int main()
{
    int num,i,temp=0;
    printf("Enter a number");
    scanf("%d",&num);
    if(num==1)
    {
    printf("Not a prime number");
    }
    else
    {
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
         temp=1;
        }
    }
    }
    if(temp==1)
    printf("%d is not prime number",num);
    else
    printf("%d is a prime number",num);
=======
//Ques-4 from week2

#include<stdio.h>
int main()
{
    int num,i,temp=0;
    printf("Enter a number");
    scanf("%d",&num);
    if(num==1)
    {
    printf("Not a prime number");
    }
    else
    {
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
         temp=1;
        }
    }
    }
    if(temp==1)
    printf("%d is not prime number",num);
    else
    printf("%d is a prime number",num);
>>>>>>> 7d3ac1e6d400ceb3d6c03e99db1ab4cfe407d7a0
}