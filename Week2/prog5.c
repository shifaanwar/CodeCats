<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int num,rem,reverse=0;
    printf("Enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num % 10;
        num = num/10;
    reverse = reverse*10+rem;
    }
    printf("Reverse of %d is %d",num,reverse);
}
=======
//Ques-5 from week2

#include<stdio.h>
int main()
{
    int num,rem,reverse=0;
    printf("Enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num % 10;
        num = num/10;
    reverse = reverse*10+rem;
    }
    printf("Reverse of %d is %d",num,reverse);
}
>>>>>>> 7d3ac1e6d400ceb3d6c03e99db1ab4cfe407d7a0
