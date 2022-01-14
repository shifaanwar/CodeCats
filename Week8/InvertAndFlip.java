class InvertAndFlip {
public int[][] flipAndInvertImage(int[][] image)
{
 for(int row=0;row<image.length;row++)
 {
  int left =0;
  int  right = image[0].length-1;
  while(left<right)
   {
   int temp = image[row][left];
   image[row][left]=image[row][right];
   image[row][right]=temp;
   left++;
   right--;
   }
   }
 for(int i=0;i<image.length;i++)
 {
 for(int j=0;j<image[0].length;j++)
 {
 if(image[i][j]==0)
 image[i][j]=1;
 else
 image[i][j]=0;
 }
 }
  return image;      
}
}   
