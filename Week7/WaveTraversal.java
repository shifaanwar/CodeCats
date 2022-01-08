package practice;
import java.util.*;
public class WaveTraversal {
public static void main(String args[])throws Exception
{
	int i,j;
	Scanner sc = new Scanner(System.in);
	int row = sc.nextInt();
	int col = sc.nextInt();
	int arr[][]=new int[row][col];
	for( i=0;i<arr.length;i++)
	{
	for( j=0;j<arr[0].length;j++) 
	{
	 arr[i][j]=sc.nextInt();
	}
	}
	for(j=0;j<arr[0].length;j++)
	{
	if(j%2==0)
	{
	for(i=0;i<arr.length;i++)
	{
	 System.out.println(arr[i][j]);
	}
	}
	else
	{
	for(i=arr.length-1;i>=0;i--)
	{
	 System.out.println(arr[i][j]);
	}
	}
	}
}
}
