#include<stdio.h>
#include<string.h>
int checkDuck(char *,int);
int main()
{
char s1[100];
char *str = s1;
scanf("%s",&s1);
int length = strlen(s1); 
int res=checkDuck(s1,length);
if(res==1)
printf("Duck Number");
else
printf("Not a Duck Number");
}
 int checkDuck(char n[],int length)
{
    int store=0;
    if(n[0]=='0')
     return store;
    else
    {
    for(int i=0;i<length;i++)
    {
        if(n[0]!='0' && n[i]=='0')
           store = 1;
    }
    }
    return store;
}