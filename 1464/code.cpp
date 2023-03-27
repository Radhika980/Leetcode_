
class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int t=1;
        sort(nums.begin(),nums.end(),greater<int>());
       
            t=(nums[0]-1)*(nums[1]-1);
        
        return t;
    }
};
