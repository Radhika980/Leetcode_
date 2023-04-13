class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        set<float>ans;
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        while(l<=r)
        {
        float a=(nums[l]+nums[r])/(float)2;
        ans.insert(a);
        l++;
        r--;
        }
        //cout<<ans;
        return ans.size();
        
        
    }
};
