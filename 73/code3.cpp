//better approach
class Solution {
public:
void setZeroes(vector<vector<int>>& matrix) 
{
    int m=matrix.size();
    int n=matrix[0].size();

    vector<bool>row(m,false);
    vector<bool>col(n,false);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0)
            {
                col[j]=true;
                row[i]=true;
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(col[j]==true|| row[i]==true)
            {
               matrix[i][j]=0; 
            }
        }
    }

}
};
