class ValidMatrix{
    public boolean checkValid(int[][] matrix) {
        int length = matrix.length;
        for(int row =0;row<length;row++)
        {
        Set<Integer> s1 = new HashSet<>();
        Set<Integer> s2 = new HashSet<>();
        for(int col =0;col<length;col++)
        {
            s1.add(matrix[row][col]);
            s2.add(matrix[col][row]);
        }
          if(s1.size()<length || s2.size()<length)
              return false;
        }
        return true;
    }
}