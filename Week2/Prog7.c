//Ques-7 from week2

#include <stdio.h>
#include <math.h>
int factorial_trailing_zeroes(int);
int main()
{
    int total_nos,i;
    printf("Input the number count and numbers\n");
    scanf("%d", &total_nos);
    int num[total_nos];
    for (i= 0; i<total_nos;i++)
    {
        scanf("%d", &num[i]);
    }
    int trailing_zeroes[total_nos];

    for (i = 0; i<total_nos;i++)
    {
    trailing_zeroes[i] = factorial_trailing_zeroes(num[i]);
    }
     printf("Trailing zeroes:\n");
    for (i = 0; i < total_nos; i++)
    {
    printf("%d\n", trailing_zeroes[i]);
    }
    return 0;
}
int factorial_trailing_zeroes(int number) 
{
    int zeroes = 0,i;
    for (i=1;number/pow(5, i); i++)
        zeroes += number / pow(5, i);
    return zeroes;
}
