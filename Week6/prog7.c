#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int checkAlmostEquivalent(char *,char *,int );
int hash1[26]={0},hash2[26]={0};
int main() 
{
    char word1[200],word2[200];
    printf("Enter two strings\n");
    scanf("%s",word1);
    scanf("%s",word2);
    int n = strlen(word1);
    int result = checkAlmostEquivalent(word1,word2,n);
    if(result==1)
    printf("false");
    else
    printf("true");
    return 0;
}
int checkAlmostEquivalent(char *s,char *w,int n)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        hash1[s[i]-'a']++;
        hash2[w[i]-'a']++;
    }
    for(i=0;i<n;i++)
    {
        if(abs(hash1[i]-hash2[i])>3)
           flag=1;
    }
    return flag;
}