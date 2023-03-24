class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
         unordered_map<int,int>mp;
         vector<int>ans;
         int n=nums.size();
         int m=float(n/3);
        for(int i=0;i<nums.size();i++)
        {
          mp[nums[i]]++;
        }
        for(auto x:mp)
        {
          if(m<x.second)
          {
           ans.push_back(x.first);
          }
        }
    return ans;  
        
    }
};
