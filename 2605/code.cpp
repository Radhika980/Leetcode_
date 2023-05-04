class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp1;
        int k=INT_MAX;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            mp1[nums2[i]]++;
        }
        for(auto [data,freq]:mp)
        {
            for(auto [data1,freq1]:mp1)
            {
                if(data==data1 && data<k)
                {
                    k=data;
                }
            }
        }
        if(k!=INT_MAX)
        return k;
        else
        {
            int m=*min_element(nums1.begin(),nums1.end());
            int mn=*min_element(nums2.begin(),nums2.end());
            if(m<mn)return m*10+mn;
            else return mn*10+m;
        }
        
    }
};
