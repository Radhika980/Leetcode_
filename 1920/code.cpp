class Solution {
public:
    vector<int> buildArray(vector<int>& nums)
    {
        int a=nums.size();
        vector<int>ans;
        for(int i=0;i<a;i++)
        {
            ans.push_back(nums[nums[i]]);
        }
        
       return ans; 
    }
};
