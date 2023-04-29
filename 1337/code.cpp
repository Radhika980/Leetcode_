class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        vector<int>ans;
        vector<pair<int,int>>p;
        int ct=0;
        for(int i=0;i<mat.size();i++)
        {
            ct=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)ct++;
            }
            p.push_back({ct,i});
           
        }
    
        sort(p.begin(),p.end());
        for(int i=0;i<k;i++)
        {
            ans.push_back(p[i].second);
        }
         return ans;
    }
};
