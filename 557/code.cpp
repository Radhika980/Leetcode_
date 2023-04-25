class Solution {
public:
    string reverseWords(string s) 
    {
        vector<string>mp;
        string temp="";
        string ans="";
        for(int i=0;i<=s.size();i++)
        {
            temp+=s[i];
            if(s[i]==' ')
            {
                temp.pop_back();
                mp.push_back(temp); 
                temp.clear();
            }
            
        }
        temp.pop_back();
        mp.push_back(temp); 
        temp.clear();
        for(int i=0;i<mp.size();i++)
        {
            string k=mp[i];
            reverse(k.begin(),k.end());
            ans+=k;
            ans+=' ';
        }
        ans.pop_back();
        return ans;
    }
};
