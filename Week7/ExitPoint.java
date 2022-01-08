package practice;
import java.util.*;
public class ExitPoint {
public static void main(String args[])
{
	Scanner sc = new Scanner(System.in);
	int i,j;
	int rows = sc.nextInt();
	int cols = sc.nextInt();
	int arr[][]= new int[rows][cols];
	for(i=0;i<arr.length;i++)
	{
		for(j=0;j<arr[0].length;j++)
		{
			arr[i][j]= sc.nextInt();
		}
	}
	int direction = 0;
	int row_no=0;
	int col_no=0;
	while(true)
	{
		direction = (direction+arr[row_no][col_no])%4;
		if(direction==0) //East
		{
			col_no++;
		}
		else if(direction==1) //south
		{
			row_no++;
		}
		else if(direction==2) //west
		{
			col_no--;
		}
		else if(direction==3) //north
		{
			row_no--;
		}
		if(row_no<0)
		{
		row_no++;
		break;
		}
		else if(col_no<0)
		{
		col_no++;
		break;
		}
		else if(row_no==arr.length)
		{
		row_no--;
		break;
		}
		else if(col_no==arr[0].length)
		{
		col_no--;
		break;
		}
	}
	System.out.println(row_no);
	System.out.println(col_no);
}
}
