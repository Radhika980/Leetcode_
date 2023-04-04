class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums)
    {
        vector<int>ans;
        int pp=0;
        int l=0;
        int n=nums.size();
       unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++)
       {
           mp[nums[i]]++;
       }
       for(auto [data,freq]:mp)
       {
           if(freq%2==0)
           {
               pp=pp+(freq/2);
           }
           else if(freq==1)l++;
           else if(freq%2!=0)
           {
               
               int n=freq-1;
               int z=n/2;
               pp=pp+z;
               l++;

           }
       }
       ans.push_back(pp);
       ans.push_back(l);
       return ans;
        
    }
};
