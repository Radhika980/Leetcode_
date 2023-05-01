class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) 
    {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]=i;
        }
        int low1=INT_MAX;
        for(int j=0;j<mat.size();j++)
        {
           int maxi=INT_MIN;
            for(int k=0;k<mat[0].size();k++)
            {
                 maxi=max(mp[mat[j][k]],maxi);
                
                
            }
            low1= min(low1,maxi);
        }
         int low=INT_MAX;
        for(int jj=0;jj<mat[0].size();jj++)
        {
           
               int maxii=INT_MIN;
           for(int kk=0;kk<mat.size();kk++)
            { 
              maxii=max(mp[mat[kk][jj]],maxii);
                
           }
            low = min(low,maxii);
        }
        return min(low1,low);
    }
};
