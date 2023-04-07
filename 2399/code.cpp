class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) 
    {
        int aa=0,bb=0,cc=0;
        for(int i=0;i<s.size()-1;i++)
        {
            aa=i;
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j])
                {
                    bb=j;
                    cc=bb-aa-1;
                    if(cc!=distance[int(s[i])-int('a')])return false;
                    //break;
                }

            }
            
            
        }
        return true;
        
    }
    
};
