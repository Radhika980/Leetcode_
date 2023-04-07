class Solution {
public:
    int findLucky(vector<int>& arr)
    {
         unordered_map<int,int>mp;
        // vector<int>ans;
         int m=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto [data,fre]:mp)
        {
            if(data==fre && m<data)
            {
                m=data;
            }//ans.push_back(fre);
        }
        //int m=*max_element(ans.begin(),ans.end());
        //n=m;
        if(m>0)
        return m;
        else return -1;
        //if(n>m)return n;
        //else return -1;
    }
};
