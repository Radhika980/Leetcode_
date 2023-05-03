class Solution {
public:
    bool is_prime(int n)
    {
        if(n==0 || n==1)return false;
        int i=2;
        while(i<=sqrt(n))
        {
            if(n%i==0) return false;
            i++;
        }        
        return true;
        
    }
    vector<int>ans;
    int diagonalPrime(vector<vector<int>>& nums) 
    {
    for(int i=0;i<nums.size();i++)
    {
        int x=nums[i][i];
        int y=nums[i][nums.size()-i-1];
        if(is_prime(x)==true)ans.push_back(x);
        if(is_prime(y)==true)ans.push_back(y);
    }
    //  for(int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i]<<"\n";
    // }
     //int m=*max_element(ans.begin(),ans.end());
     sort(ans.rbegin(), ans.rend());
     if (ans.size()!=0)return ans[0];
     return 0;   
    }
};
