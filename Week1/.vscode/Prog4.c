//Question-4 from week1
#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
    printf("Leap Year");
    else
    printf("Not a Leap Number");
}