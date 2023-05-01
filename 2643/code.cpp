class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) 
    {
        vector<int>ans;
       int maxi=INT_MIN;
        int k=0;
        for(int i=0;i<mat.size();i++)
        {
            int ct=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    ct++;
                }
            }
           if(maxi<ct)
           {
               maxi=ct;
               k=i;
           }
        }
        
        ans.push_back(k);
        ans.push_back(maxi);
        return ans;
        
    }
};
