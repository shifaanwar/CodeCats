package practice;
import java.util.Scanner;
public class Matrix
{
public static void main(String args[])
{
		Scanner sc = new Scanner(System.in);
		int i,j,k;
		int row1 = sc.nextInt();
		int col1 = sc.nextInt();
		int one[][] = new int[row1][col1];
		for(i=0;i<one.length;i++) 
		{
		for(j=0;j<one[0].length;j++)
		{
		one[i][j]=sc.nextInt();
		}
		}
		int row2 = sc.nextInt();
		int col2 = sc.nextInt();
		int two[][]= new int[row2][col2];
		for(i=0;i<two.length;i++)
		{
		for(j=0;j<two[0].length;j++) 
		{
		two[i][j]=sc.nextInt();
		}
		}
		if(col1!=row2)
		{
		System.out.println("invalid input");
		return;
		}
		int product[][]= new int[row1][col2];
		for(i=0;i<product.length;i++) 
		{
		for(j=0;j<product[0].length;j++)
		{
		for(k=0;k<col1;k++)
		{
		product[i][j]+=one[i][k]*two[k][j];
		}
		}
		}
		for(i=0;i<product.length;i++) 
		{
		for(j=0;j<product[0].length;j++)
		{
		System.out.print(product[i][j]+" ");
		}
		System.out.println();
	        }
}
}
