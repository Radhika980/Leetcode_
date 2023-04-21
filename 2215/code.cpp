class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2)
    {
        vector<vector<int>>ans;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        vector<int>ans1;
        vector<int>ans2;
        for(int i=0;i<nums1.size();i++)
        {
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            mp2[nums2[i]]++;
        }
        for(auto [data,freq]:mp1)
        {
            
                if(mp2[data]>=1)continue;
                else ans1.push_back(data);
           
            
        }
        for(auto [data,freq]:mp2)
        {
            
                if(mp1[data]>=1)continue;
                else ans2.push_back(data);
            
            
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;

        
    }
};
