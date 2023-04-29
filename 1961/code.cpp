class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) 
    {
        string c="";
        for(auto x:words)
        {
            c+=x;
            if(c==s)return true;
            else if(c.length()>=s.length())return false;
        }
       return false; 
    }
};
