class Solution {
public:
    vector<int> evenOddBit(int n) 
    {
        vector<int>vec;
       vector<int>ans;
        
        int ev=0;
        int od=0;
        int kk=n;
        while(kk!=0)
        {
            ans.push_back(kk%2);
            kk=kk/2;
            
        }
     for(int i=0;i<ans.size();i++)
     {
         if(ans[i]==1 && i%2==0)ev++;
         else if(ans[i]==1 && i%2!=0)od++;
     }
        vec.push_back(ev);
        vec.push_back(od);
        return vec;
    }
};
