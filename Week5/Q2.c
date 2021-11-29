#include <stdio.h>
int search(char *p, char ch)
{
    int f = 0;
    while(*p!='\0')
    {
        if(*p==ch)
        {
            f=1;
            break;
        }
        *p++;
    }
    return f;
}
int main()
{
char str[20],ch;
int store;
gets(str);
scanf("%c",&ch);
store = search(str,ch);
if(store==1)
printf("Character is found");
else
printf("Character not found");
}