class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int ct=0;
        vector<int>n;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)ct++;
            else 
            {
                n.push_back(nums[i]);
            }
        }
        for(int i=nums.size()-ct;i<nums.size();i++)
        {
            n.push_back(0);
        }
        nums.clear();
        for(int i=0;i<n.size();i++)
        {
            nums.push_back(n[i]); 
        } 
    }
};
