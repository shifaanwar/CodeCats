//Question-3 From Week1 

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three integers");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
    printf("%d is max",num1);
    else if(num2>num3)
    printf("%d is max",num2);
    else
    printf("%d is max",num3);
}
