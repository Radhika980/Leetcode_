class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
      
        int ct=0;
        for(int i=0;i<logs.size();i++)
        {
            if(logs[i]!="./" && logs[i]!="../")ct++;
            else if(logs[i]=="./")continue;
            else if(logs[i]=="../")
            {
                if(ct==0)continue;
                else ct--;
            }
        }
        if(ct>0)
        return ct;
        else return 0;
        
    }
};
