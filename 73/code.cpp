class Solution {
public:
     void setmatrix(vector<vector<int>>& matrix,vector<int>v,vector<int>vv)
        {
            
            for(int i=0;i<v.size();i++)
            {
                for(int j=0;j<matrix[0].size();j++)
                {
                    matrix[v[i]][j]=0;
                    
                }
            }
            
        
            for(int i=0;i<matrix.size();i++)
            {
               for(int j=0;j<vv.size();j++)
                {  
                    matrix[i][vv[j]]=0;
                }
            }
        }
        vector<int>v;
        vector<int>vv;
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int r=0,c=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    r=i;
                    c=j;
                    cout<<r;
                    cout<<c;
                    v.push_back(r);
                    vv.push_back(c);
                    
                }
            }
        }
       setmatrix(matrix,v,vv); 
    }
};
