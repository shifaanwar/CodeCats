<<<<<<< HEAD
//Ques-3 from week2

#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("Enter a number");
    scanf("%d",&num);
    int n = num;
    while(num>0)
    {
  rem = num%10;
  num = num/10;
  sum+=rem*rem*rem; 
    }
    if(sum == n)
    printf("Armstrong number");
    else
    printf("Not an Armstrong number");
=======
//Ques-3 from week2

#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("Enter a number");
    scanf("%d",&num);
    int n = num;
    while(num>0)
    {
  rem = num%10;
  num = num/10;
  sum+=rem*rem*rem; 
    }
    if(sum == n)
    printf("Armstrong number");
    else
    printf("Not an Armstrong number");
>>>>>>> 7d3ac1e6d400ceb3d6c03e99db1ab4cfe407d7a0
}