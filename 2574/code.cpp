class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums)
    {
        vector<int>ans;
        vector<int>ans1;
        vector<int>ans2;
        int sum=0;
        for(int j=0;j<nums.size();j++)
        {
            sum+=nums[j];
        }
       
        int summ=sum;
        for(int j=0;j<nums.size();j++)
        {
            sum=sum-nums[j];
            ans.push_back(sum);
        }
        
        reverse(nums.begin(),nums.end());
        for(int j=0;j<nums.size();j++)
        {
            summ=summ-nums[j];
            ans1.push_back(summ);
        }
        reverse(ans1.begin(),ans1.end());
       
        for(int i=0;i<ans.size();i++)
        {
            ans2.push_back(abs(ans[i]-ans1[i]));

        }
        return ans2;
        
    }
};
