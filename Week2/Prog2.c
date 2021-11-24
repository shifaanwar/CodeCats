//Ques-2 from week2

#include<stdio.h>
int main()
{
    int num,i,factorial=1;
 printf("Enter a number");
 scanf("%d",&num);
 if(num==0||num==1)
 {
     printf("Factorial is 1");
 }
 else{
 for(i=num;i>=1;i--)
 {
 factorial*=i;
 }
 printf("Factorial is %d",factorial);
}
}
