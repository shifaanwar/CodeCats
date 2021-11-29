#include <stdio.h>
void convert(char *p)
{
   while(*p!='\0')
   {
       if(*p>=65&&*p<=90)
       *p+=32;
       else
       if(*p>=97&&*p<=122)
       *p-=32;
       p++;
   }
}
int main() {
   char str[10];
  gets(str);
 convert(str);
    printf("%s",str);
    return 0;
}