class Solution {
public:
    int countSeniors(vector<string>& details)
    {
        int ans=0;
        string s="";
        string k="";
        int z;
        for(int i=0;i<details.size();i++)
        {
            s=details[i];
            k=k+s[11]+s[12];
            z=stoi(k);
            cout<<z<<"\n";
            if(z>60)ans++;
            k.clear();
        }
        return ans;
        
    }
};
