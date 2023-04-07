class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
       sort(nums.begin(),nums.end());
       int l=0;
       int r=nums.size()-1;
       while(l<=r)
       {
           if(-1*nums[l]==nums[r])return nums[r];
           else if(nums[r]>(-1*nums[l]))r--;
           else if(nums[r]<(-1*nums[l]))l++;
       }
      return -1;   
    }
    
};
       
