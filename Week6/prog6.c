#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter Your String\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='G')
        printf("G");
        else if(str[i]=='('&&str[i+1]==')')
        {
          printf("o");
          i+=1;
        }
       else if(str[i]=='(' && str[i+1]=='a' &&str[i+2]=='l' &&str[i+3]==')' )
        {
        printf("al");
        i+=3;
        }
    }
    
}