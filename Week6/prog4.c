#include<stdio.h>
#include<string.h>
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000
int main()
{
char roman[100];
int decimal = 0;
printf("Enter the roman number\n");
scanf("%s",roman);
int length =strlen(roman);
for(int i=0;i<length;i++)
{
    if(roman[i]=='I')
    {
        if(roman[i+1]=='V')
        {
         decimal += (V-I);
         i++;
        }
         else if(roman[i+1]=='X')
         {
         decimal += (X-I);
         i++;
         }
         else
         decimal+=I;
    }
    else if(roman[i]=='X')
    {
        if(roman[i+1]=='L')
        {
        decimal += (L-X);
        i++;
         }
        else if(roman[i+1]=='C')
        {
        decimal +=(C-X);
        i++;
         }
        else
        decimal+=X;
    }
    else if(roman[i]=='C')
    {
        if(roman[i+1]=='D')
         {
         decimal +=(D-C);
         i++;
         }
         else if(roman[i+1]=='M')
         {
         decimal +=(M-C);
         i++;
         }
         else
         decimal+=C;
    }
    else if(roman[i]=='V')
    decimal+=V;
     else if(roman[i]=='L')
    decimal+=L;
     else if(roman[i]=='D')
    decimal+=D;
     else if(roman[i]=='M')
    decimal+=M;
}
printf("%d",decimal);
}