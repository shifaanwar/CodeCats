class LuckyNumber{
    public List<Integer> luckyNumbers (int[][] arr) {
    int n = arr.length;
     int m = arr[0].length;
     int max = Integer.MIN_VALUE;
     List<Integer> list = new ArrayList<>();
     for(int i=0;i<m;i++)
     {
         max = Integer.MIN_VALUE;
         for(int j=0;j<n;j++)
         {
             max = Math.max(max,arr[j][i]);
         }
         list.add(max);
     }
     List<Integer> list2 = new ArrayList<>();
     int min = Integer.MAX_VALUE;
     for(int i=0;i<n;i++)
     {
         min =Integer.MAX_VALUE;
         for(int j=0;j<m;j++)
         {
             min = Math.min(min,arr[i][j]);
         }
         list2.add(min);
     }
     List<Integer> li = new ArrayList<>();
     for(int i=0;i<list.size();i++)
     {
         if(list2.contains(list.get(i)))
             li.add(list.get(i));
     }
     return li;
    }
        
    }