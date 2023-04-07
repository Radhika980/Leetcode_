class Solution {
public:
    bool digitCount(string num) 
    {
        int n=num.size();
        int flag=-1;
        unordered_map<int,int>map;
        
        for(int i=0;i<num.size();i++)
        {
            map[num[i] -'0']++;
        }
        if(n==1)return false;
        for(int i=0;i<num.size();i++)
        {
            //cout<<map[i]<<"\n";
              if(num[i]-'0'!=map[i])
              {
                  return false;
              }
              //i++;
        }
        //if(flag==0) return false;
        return true; 
    }
    
};
