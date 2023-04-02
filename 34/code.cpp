class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int>ans{-1,-1};
        vector<int>pp;
        int k,l;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
               k=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
                l=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
                pp.push_back(k);
                pp.push_back(l-1);
                return pp;
            }
        }
        return ans;
    }
};
