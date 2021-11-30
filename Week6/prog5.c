#include<stdio.h>
#include<string.h>
int lowerCase[26]={0},upperCase[26]={0};
void count_Jewels(char *j,char *s,int l1,int l2)
{
int i,count=0;
 for(i=0;i<l1;i++)
 {
     if(j[i]>='A'&&j[i]<='Z')
    upperCase[j[i]-'A']++;
    else if(j[i]>='a'&&j[i]<='z')
    lowerCase[j[i]-'a']++ ; 
 }
 for(i=0;i<l2;i++)
 {
     if(s[i]>='A'&&s[i]<='Z')
     {
         if(upperCase[s[i]-'A']!=0)
         count++;
     }
     else if(s[i]>='a'&&s[i]<='z')
     {
         if(lowerCase[s[i]-'a']!=0)
         count++;
     }
 }
printf("%d",count);
}
int main()
{
char jewels[100],stones[100];
printf("Enter the jewels\n");
scanf("%s",jewels);
printf("Enter the stones\n");
scanf("%s",stones);
int jlength = strlen(jewels);
int slength = strlen(stones);
count_Jewels(jewels,stones,jlength,slength);
}