class Wealth
 {
    public int maximumWealth(int[][] accounts) {
    int max =0;
	for(int row=0;row<accounts.length;row++)
	{
	int left =0,sum=0;
	while(left<accounts[0].length)
	{
	sum+=accounts[row][left];
	left++;
	}
	if(sum>max)
	max = sum;
	}
	return max;
    }
}