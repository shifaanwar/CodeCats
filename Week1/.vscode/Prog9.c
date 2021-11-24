//Ques9 from Week1
#include<stdio.h>
int main()
{
    int phy,chem,math,bio,comp;
    float percent;
    printf("Enter marks of five subjects\n");
    scanf("%d",&phy);
    scanf("%d",&chem);
    scanf("%d",&math);
    scanf("%d",&bio);
    scanf("%d",&comp);
    percent = (phy+chem+math+bio+comp)/5;
    printf("%.1f\n",percent);
    if(percent>100)
    printf("Invalid");
   else if(percent>=90)
    printf("Grade A");
   else if(percent>=80)
    printf("Grade B");
    else if(percent>=70)
    printf("Grade C");
    else if(percent>=60)
    printf("Grade D");
    else if(percent>=40)
    printf("Grade E");
    else
    printf("Grade F");

}