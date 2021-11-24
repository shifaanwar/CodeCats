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
for(int row=1;row<=n;row++)
{
    for(int col=1;col<=2*n-1;col++)
    {
        if(col<n-row+1||col>n+row-1)
        printf(" ");
        else
        printf("*");
    }
    printf("\n");
}
}
