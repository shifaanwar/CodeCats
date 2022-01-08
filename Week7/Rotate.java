package practice;
import java.util.*;
public class Rotate {
public static void main(String args[])
{
	Scanner sc = new Scanner(System.in);
	int row,col,temp;
	int total_row=sc.nextInt();
	int arr[][]=new int[total_row][total_row];
	for(row=0;row<arr.length;row++)
	{
	for(col=0;col<arr[0].length;col++)
	{
	 arr[row][col]=sc.nextInt();
	}
	}
	
	for(row=0;row<arr.length;row++)  //transpose
	{
	for(col=row;col<arr[0].length;col++)
	{
	 temp = arr[row][col];
	 arr[row][col] = arr[col][row];
	 arr[col][row] = temp;
	}
	}
	
	for(row=0;row<arr.length;row++) //rotate
	{
		int right_index=arr.length-1;
		int left_index=0;
		while(left_index<right_index)
		{
			temp=arr[row][left_index];
			arr[row][left_index]=arr[row][right_index];
			arr[row][right_index]=temp;
			right_index--;
			left_index++;
		}
	}
	display(arr);
}
public static void display(int arr[][])
{
	for(int row=0;row<arr.length;row++)
	{
	for(int col=0;col<arr[0].length;col++)
	{
	 System.out.print(arr[row][col]+" ");
	}
	System.out.println(" ");
	}
}
}