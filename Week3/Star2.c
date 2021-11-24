//Ques-1 from Week3
#include<stdio.h>
void star(int);
int main()
{
int no_of_rows;
printf("Enter the number of stars");
scanf("%d",& no_of_rows);
star( no_of_rows);
return 0;
}
void star(int n)
{
for(int row=n;row>=1;row--)
{
    for(int col=1;col<=row;col++)
    {
        printf("*");
    }
    printf("\n");
}
}
