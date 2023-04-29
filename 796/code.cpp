class Solution {
public:
    bool rotateString(string s, string goal)
    {
        if(s==goal)return true;
        int k=s.size()-1;
        char ch;
        while(k>0)
        {
            ch=s[0];
            s.erase(0,1);
            s=s+ch;
            
            if(s==goal)return true;
            k--;
        }
        
        return false;
        
    }
};
