class Solution {
public:
    int numSubseq(vector<int>& nums, int target) 
    {
      int n=nums.size();
      vector<int>vec(n,0);
      int x=0;
      vec[0]=1;
      for(int i=1;i<nums.size();i++)
      vec[i]=vec[i-1]*2%1000000007;
      sort(nums.begin(),nums.end());
      int l=0,r=nums.size()-1;
      while(l<=r)
      {
          if(nums[l]+nums[r]>target)
          {
              r--;
          }
          else
          {
              x=(x+vec[r-l])%1000000007;
              l++;
          }
      } 
      return x;
      //return x % (pow(10,9)+7);  
    }
};
