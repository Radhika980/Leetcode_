
class Solution {
public:
    int partitionString(string s) 
    {
        
        int ct=1;
        unordered_map<char,bool>mp;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==true)ct++,mp.clear();
            mp[s[i]]=true;
        }
        return ct;

    }
};

