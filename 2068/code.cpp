class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) 
    {
        map<char,int>mp;
        map<char,int>mp1;
        for(char c:word1) mp[c]++;
        for(char c:word2) mp1[c]++;
        for(char c:word1)
        {
         if(abs(mp[c]-mp1[c])>3)return false;
        }
        for(char c:word2)
        {
        if(abs(mp[c]-mp1[c])>3)return false;
        }
        return true;
     
        
    }
};
