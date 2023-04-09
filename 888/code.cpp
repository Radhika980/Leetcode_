class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) 
    {
        vector<int>ans;
        int sum=0,s=0,totsum=0;
        for(int i=0;i<aliceSizes.size();i++)
        {
            sum+=aliceSizes[i];
        }
        for(int i=0;i<bobSizes.size();i++)
        {
            s+=bobSizes[i];
        }
        
            totsum=(sum+s)/2;
        
        for(int i=0;i<aliceSizes.size();i++)
         {
             for(int j=0;j<bobSizes.size();j++)
             {
                 if(sum-aliceSizes[i]+bobSizes[j]==totsum)
                 {
                     ans.push_back(aliceSizes[i]);
                     ans.push_back(bobSizes[j]);
                     return ans;
                 }
             }
        }
        return ans;
        
    }
};

