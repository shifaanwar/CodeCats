#include<stdio.h>
int main()
{
    int t,x,n,i=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&n);
        while(i++<n)
        {
        if(x%2==0)
        x-=i;
        else
        x+=i;
        printf("%d\n",x);
        }
    }

}