package practice;
import java.util.Scanner;
public class IdempotentMatrix {
public static void main(String args[])
{
Scanner sc = new Scanner(System.in);
int i,j,k;
boolean flag = true;
int rows = sc.nextInt();
int arr[][] = new int[rows][rows];
int product[][]=new int[rows][rows];
for(i=0;i<arr.length;i++)
{
for(j=0;j<arr[0].length;j++)
{
arr[i][j]=sc.nextInt();
}
}
for(i=0;i<arr.length;i++)
{
for(j=0;j<arr[0].length;j++)
{
for(k=0;k<arr[0].length;k++)
{
product[i][j]+=	arr[i][k]*arr[k][j];
}
}
}
for(i=0;i<arr.length;i++)
{
for(j=0;j<arr[0].length;j++)
{
 if(arr[i][j]!=product[i][j])
{
 flag = false;
 break;
}
}
}
if(flag)
System.out.println("Idempotent Matrix");
else
System.out.println("Not An Idempotent Matrix");
}
}
