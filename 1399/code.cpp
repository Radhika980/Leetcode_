class Solution {
public:

    int sum(int n)
        {
            int s=0,r=0;
            while(n>0)
            {
             r=n%10;
             s=s+r;
             n=n/10;
            }
            return s;
        }
    int countLargestGroup(int n) 
    {
        int ct=0,f=0;
        int m=INT_MIN;
        unordered_map<int,int>mp;
        
        for(int i=1;i<=n;i++)
        {
            mp[sum(i)]++;
        }
        
        for(auto [data,freq]:mp)
        {
            if(m<freq)
            {
                m=freq;
                //f=freq;
            }
        }
        //cout<<f;
        for(auto [data,freq]:mp)
        {
            if(m==freq)
            {
                ct++;
            }
        }

        return ct;
    }
};
