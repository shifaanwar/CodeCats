package practice;
import java.util.*;
public class SaddlePoint {
public static void main(String args[])
{
	Scanner sc = new Scanner(System.in);
	int i,j,k;
	int rows = sc.nextInt();
	int cols = sc.nextInt();
	int arr[][]=new int[rows][cols];
	for(i=0;i<arr.length;i++)
	{
	for(j=0;j<arr[0].length;j++)
	{
	 arr[i][j]=sc.nextInt();	
	}
	}
	for(i=0;i<arr.length;i++)
	{
	int least_col=0;
	for(j=1;j<arr[0].length;j++)
	{
	if(arr[i][j]<arr[i][least_col])	
	{
		least_col=j;
	}
	}
	boolean flag = true;
	for(k=0;k<arr.length;k++)
	{
	 if(arr[i][least_col]<arr[k][least_col])
	 {
		 flag = false;
		 break;
	 }
	}
	if(flag)
	{
	System.out.print("saddle point is "+arr[i][least_col]);
	return;
	}
	}
	System.out.println("No saddle point");
}
}
