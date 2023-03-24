class Solution {
public:
    int maximumProduct(vector<int>& nums)
    {
      int lprod=1,rprod=1;
     sort(nums.begin(),nums.end());
     int n=nums.size();
      lprod=nums[n-1]*nums[n-2]*nums[n-3];
      rprod=nums[0]*nums[1]*nums[n-1];
      int m=max(lprod,rprod); 
      return m;
      }
};
