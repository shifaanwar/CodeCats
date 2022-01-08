package practice;
import java.util.Scanner;
public class DiagonalTraversal {
public static void main(String args[])
{
 Scanner sc = new Scanner(System.in);
 int i,j,gap;
 int rows = sc.nextInt();
 int arr[][]=new int[rows][rows];
 for(i=0;i<arr.length;i++) 
 {
 for(j=0;j<arr[0].length;j++)
 {
  arr[i][j]=sc.nextInt();
 }
 }
 for(gap=0;gap<arr.length;gap++)
 {
 for(i=0,j=gap;j<arr.length;i++,j++)
 {
	 System.out.print(arr[i][j]+" ");
 }
 System.out.println();
 }
}
}
