class Solution {
public:
    bool canPartition(vector<int>& nums)
    {
        int n=nums.size();
        int sum=0,summ=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum%2!=0)return false;
        else if(sum%2==0)
        {
            summ=(sum)/2;
        }
        bool dp[n+1][sum+1];
         for(int i=0;i<n+1;i++)
        {
           for(int j=0;j<sum+1;j++)
            {
                dp[i][j]=false;
            }
        }
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<summ+1;j++)
            {
                if(i==0)dp[i][j]=false;
                if(j==0)dp[i][j]=true;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<summ+1;j++)
            {
                if(nums[i-1]<=j)dp[i][j]=(dp[i-1][j]||dp[i-1][j-nums[i-1]]);
                else if(nums[i-1]>j)dp[i][j]=dp[i-1][j];
            }
        }
      return dp[n][summ];  
    }
};
