//Question-8 from week1

#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,real_root1,real_root2,imaginary;
float disc;
printf("Enter the value of a,b,c for quadratic equation\n");
scanf("%f %f %f",&a,&b,&c);
disc = b*b-4*a*c;
if(disc>0)
{
    real_root1 = (-b+sqrt(disc))/(2*a);
    real_root2 = (-b-sqrt(disc))/(2*a);
    printf("real and distinct roots : %.2f %.2f",real_root1,real_root2);
}
else if(disc==0)
{
    real_root2=real_root1= -b/(2*a);
    printf("Equal roots exist: %.2f",real_root1);
}
else
{
    real_root1=real_root2=-b/(2*a);
    imaginary = sqrt(-disc)/(2*a);
    printf("Complex roots are %.2f + %.2fi and %.2f + %.2fi",real_root1,imaginary,real_root2,imaginary);
}
}