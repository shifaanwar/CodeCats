#include<stdio.h>
#include<string.h>
void longestSubsequence(char*,int,int);
int hash[26]={0};
int main()
{
    char str[100];
    int k;
    printf("Enter the string\n");
    scanf("%s",str);
    printf("Enter the minimum value for a character\n");
    scanf("%d",&k);
    int length = strlen(str);
    longestSubsequence(str,length,k);
}
void longestSubsequence(char *c,int length,int k)
{
    int i;
for(i=0;i<length;i++)
{
    if(c[i]>='A'&&c[i]<='Z')
      c[i]=c[i]+32;
      hash[c[i]-'a']++;
}
for(i=0;i<length;i++)
{
    if(hash[c[i]-'a']>=k)
    printf("%c",c[i]);
}
}