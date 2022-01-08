package practice;
import java.util.*;
public class SpiralTraversal {
public static void main(String args[])
{
	Scanner sc = new Scanner(System.in);
	int i,j,counter=0;
	int row = sc.nextInt();
	int col =sc.nextInt();
	int arr[][]=new int[row][col];
	int total=row*col;
	int min_row=0,min_col=0;
	int max_row=arr.length-1;
	int max_col=arr[0].length-1;
	for(i=0;i<arr.length;i++)
	{
	for(j=0;j<arr[0].length;j++)
	{
	  arr[i][j]=sc.nextInt();
	}
	}
	while(counter<total)
	{
	for(i=min_row,j=min_col;i<=max_row&&counter<total;i++)
	{
		System.out.print(arr[i][j]+" ");
		counter++;
	}
	min_col++;
	for(i=max_row,j=min_col;j<=max_col&&counter<total;j++)
	{
		System.out.print(arr[i][j]+" ");
		counter++;
	}
	max_row--;
	for(i=max_row,j=max_col;i>=min_row&&counter<total;i--)
	{
		System.out.print(arr[i][j]+" ");
		counter++;
	}
	max_col--;
	for(i=min_row,j=max_col;j>=min_col&&counter<total;j--)
	{
		System.out.print(arr[i][j]+" ");
		counter++;
	}
	min_row++;
	}
}
}
