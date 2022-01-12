//Tranpose Of Matrix
class Solution {  
    public int[][] transpose(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        int store[][]= new int[m][n];
        for(int row=0;row<n;row++)
        {
        for(int col=0;col<m;col++)
        {
         store[col][row]=matrix[row][col];
        }
        }
        return store;
    }
}