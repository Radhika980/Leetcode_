class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
          mp[nums[i]]++;
        }
        int m=INT_MIN,ans=0;
        for(auto x:mp)
        {
          if(m<x.second)
          {
            m=x.second;
           ans=x.first;
          }
        }
    return ans;  
    }
};
