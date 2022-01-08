package practice;

import java.util.Scanner;

public class RowMaxElement {
public static void main(String args[])
{
	Scanner sc = new Scanner(System.in);
	int i,j;
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
	int max_col =0;
	for(j=0;j<arr[0].length;j++)
	{
	if(arr[i][max_col]<arr[i][j])
	{
		max_col = j;
	}
	}
	System.out.println("Max element in row "+(i+1)+" is "+arr[i][max_col]);
	}
}
}
