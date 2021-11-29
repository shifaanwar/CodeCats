#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50],i,j;
    printf("Enter the strings\n");
    scanf("%s",s1);
    scanf("%s",s2);
    int len = strlen(s1);
    int hash[26]={0};
    for(i=0;i<len;i++)
    {
        int index1 = s1[i]-'a';
        int index2 = s2[i]-'a';
      hash[index1]++;
      hash[index2]--;
    }
    hash[s2[len]-'a']--;
    for(j=0;j<26;j++)
    {
        if(hash[j]==-1)
        printf("%c",'a'+j);
    }
}