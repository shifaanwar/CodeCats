#include <stdio.h>

int main() {
   char str[30],*p,w=0,c=0;
   gets(str);
   p=str;
   while(*p!='\0')
   {
       c++;
       if(*p==' ')
       {
           w++;
       }
       *p++;
   }
   printf("Word : %d\n",w+1);
   printf("Character : %d",c);
    
    return 0;
}