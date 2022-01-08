package practice;
import java.util.*;
public class Search2D {
public static void main(String args[])
{
Scanner sc = new Scanner(System.in);
int i,j;
int row = sc.nextInt();
System.out.println("Enter the element to be searched");
int element = sc.nextInt();
int arr[][]= new int[row][row];
for(i=0;i<arr.length;i++) 
{
for(j=0;j<arr[0].length;j++)
{
 arr[i][j]=sc.nextInt();
}
}
int row_no = 0;
int col_no = arr.length-1;
while(row_no<arr.length&&col_no>=0)
{
if(element==arr[row_no][col_no])
{
System.out.println("found at index ("+row_no+","+col_no+")");
return;
}
else if(element<arr[row_no][col_no])
	col_no--;
else 
	row_no++;
}
System.out.println("Not found");
}
}
