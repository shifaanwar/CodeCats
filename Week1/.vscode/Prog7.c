//Question-7 from week1
 #include<stdio.h>
int main() 
{ 
    int  amount[8]={500,100,50,20,10,5,2,1};
    int a,temp,i; 
 
    printf("Enter the amount:");
 
    scanf("%d",&a);
    temp=a;
     for(i=0;i<8;i++)
    {
     printf("\n%d notes is:%d",amount[i],temp/amount[i]);
     temp=temp%amount[i];	 
    }  
}