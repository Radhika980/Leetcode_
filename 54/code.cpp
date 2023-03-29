class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int>ans;
        int t=0;

        int row= matrix.size()-1;
        int col = matrix[0].size()-1;

        
         int total=(row+1)*(col+1);
        //cout<<row<<col;
       int rowstart=0,rowend=row,colstart=0,colend=col;
while((total)!=t)
{
        for(int i=colstart;i<=colend && total>t;i++)
        {
            ans.push_back(matrix[rowstart][i]);
            t++;
        }
            rowstart++;
        
        for(int i=rowstart;i<=rowend && total>t;i++)
        {
            ans.push_back(matrix[i][colend]);
             t++;
            
        }
        colend--; 
        for(int i=colend;i>=colstart && total>t;i--)
        {
            ans.push_back(matrix[rowend][i]);
             t++;
             
        }
        rowend--;
        for(int i=rowend;i>=rowstart && total>t;i--)
        {
            ans.push_back(matrix[i][colstart]);
             t++;
             
        }
        colstart++;
        
}

     return ans;   
    }
};
