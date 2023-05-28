//brute force approach-o(n^3)
class Solution {
public:
     void setmatrix(vector<vector<int>>& matrix,int r,int c)
        {
            
           
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[r][j]!=0)
                {
                    matrix[r][j]=-100000;
                }
                
                
            }
            
            
        
            for(int i=0;i<matrix.size();i++)
            {
                if(matrix[i][c]!=0)
                {
                     matrix[i][c]=-100000;
                }
            }
        }
        
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
                    setmatrix(matrix,r,c); 
                    
                }
            }
        }
         for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                 if(matrix[i][j]==-100000)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
