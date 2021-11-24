//Question-5 from week1

#include<stdio.h>
int main()
{
    char first;
    printf("Enter a character");
    scanf("%c",&first);
    if(first>=65&&first<=122)
    printf("Alphabet");
    else if(first>=48&&first<=57)
    printf("Digit");
    else
    printf("Special Character");
}