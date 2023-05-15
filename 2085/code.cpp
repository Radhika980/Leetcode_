class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2)
    {
        unordered_map<string,int>mp;
        unordered_map<string,int>mp1;
        int count=0;
        for(auto c:words1)
        {
            mp[c]++;
        }
        for(auto ct:words2)
        {
            mp1[ct]++;
        }
        for(auto ch :words1)
        {
            if(mp[ch]==1 && mp1[ch]==1 && mp[ch]==mp1[ch])
            count++;
        }
        return count;
    }
};


