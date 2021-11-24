// Question-6 From Week1

#include<stdio.h>
int main()
{
    int day_no;
    printf("Enter The DayNo\n");
    scanf("%d",&day_no);
    switch(day_no)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("WEdnesday");
        break;
         case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid choice");
        break;
    }
}