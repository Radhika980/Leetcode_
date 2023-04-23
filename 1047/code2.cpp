class Solution {
public:
    string removeDuplicates(string s)
    {
        string k="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==k.back())
            {
                k.pop_back();
                //k.pop_back();
            }
            else
            // k.push_back(s[i]);
            k+=s[i];
        }
        return k;
         }
};
