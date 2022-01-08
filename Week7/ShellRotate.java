package practice;
import java.util.*;
public class ShellRotate {
public static void main(String args[])
{
	Scanner sc = new Scanner(System.in);
	int i,j;
	int rows = sc.nextInt();
	int cols = sc.nextInt();
	int arr[][]=new int [rows][cols];
	for(i=0;i<arr.length;i++)
	{
	for(j=0;j<arr[0].length;j++)
	{
	arr[i][j]=sc.nextInt();
	}
	}
	
}
}
