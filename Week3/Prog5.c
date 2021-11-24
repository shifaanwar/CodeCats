//Ques-5 from Week3
#include<stdio.h>
int main()
{
    int n,sum=0,even_sum,odd_sum;
    even_sum=odd_sum=0;
    printf("Enter the number of element you want to add");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
        if(i%2==0)
        even_sum+=arr[i];
        else
        odd_sum+=arr[i];
    }
    printf("Sum of this array is %d\n",sum);
    printf("Sum of even element is %d\n",even_sum);
    printf("Sum of odd elements is %d",odd_sum);
}