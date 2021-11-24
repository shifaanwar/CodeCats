//Ques10 From Week1
#include<stdio.h>
int main()
{
    double basic_salary,hra,da;
    printf("Enter the salary");
    scanf("%lf",&basic_salary);
    if(basic_salary>20000)
    {
        hra = 0.3*basic_salary;
        da =  0.95*basic_salary;
    }
    else if(basic_salary<=20000&&basic_salary>10000)
    {
        hra = 0.25*basic_salary ;
        da  = 0.9*basic_salary;
    }
    else
    {
        hra = 0.2*basic_salary;
        da  = 0.8*basic_salary;
    }
    double gross_salary = basic_salary+hra+da;
    printf("Total salary is %.2lf",gross_salary);

}