class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
       bool index=false;
       int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            {
                
                flag=1;
            }
        }
        if(flag==1)
        return true;
        else
        return false; 
    }
};
