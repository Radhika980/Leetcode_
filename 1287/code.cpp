class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        int n,m=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto x:mp)
        {
            if(m<(x.second))
            {
                m=x.second;
                n=x.first;
            }
        }
        return n;
    }
};
