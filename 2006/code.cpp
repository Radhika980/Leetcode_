class Solution {
public:
    int countKDifference(vector<int>& nums, int k) 
    {
        int ct=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                // cout<<"i="<<nums[i]<<" ";
                // cout<<"j="<<nums[j]<<" ";
                if(abs(nums[i]-nums[j])==k)ct++;
            }
        }
        return ct;
    }
};
