class RotateImage {
    public void rotate(int[][] matrix) {
   for(int i=0;i<matrix.length;i++)
    {
    for(int j=0;j<i;j++)
    {
    int temp = matrix[i][j];
    matrix[i][j]=matrix[j][i];
   matrix[j][i]=temp;
    }
    }
    rotateLeft(matrix);
    }   
 public static void rotateLeft(int arr[][])
 {
 for(int i=0;i<arr.length;i++)
   {
     int left=0,right =arr[0].length-1;
     while(left<right)
     {
     int temp=arr[i][left];
     arr[i][left] =arr[i][right];
     arr[i][right] = temp;
     left++;
     right--;
     }
 }
}
    
}