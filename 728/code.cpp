
class Solution {
public:
bool check(int i)
        {
            int n=i;
            int temp=i;
             while(n>0)
               {
                   if(n%10==0)return false;
                   if(temp%(n%10)!=0)return false;
                   else n=n/10;
               }
               return true;
        }
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int>ans;
        
        
       for(int i=left;i<=right;i++)
       {
           if(check(i)==true)ans.push_back(i);
           
       }
        return ans;
    }
};
