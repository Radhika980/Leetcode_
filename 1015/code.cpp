class Solution {
public:
    int smallestRepunitDivByK(int k) 
    {
        int j=0;
        int ct=1, i=0;
        while(j!=k)
        {
            
            i=(10*i+1)%k;
            if(i==0)return ct;
            else ct++;
            j++;
        }
        
        
        return -1;
        
    }
};
