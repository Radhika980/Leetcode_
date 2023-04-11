class Solution {
public:
    bool backspaceCompare(string s, string t)
    {
        string k="";
        string kk="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' && k.empty()==true)
            {
                continue;
            }
            else if(s[i]=='#')
            {
                k.pop_back();
            }
            else k+=s[i];

        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#' && kk.empty()==true)continue;
            else if(t[i]=='#')kk.pop_back();
            else kk+=t[i];

        }
        cout<<kk<<"\n";
        cout<<k<<"\n";
        if(kk==k)return true;
        else return false;
        
    }
};
