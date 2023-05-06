class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right)
    {
        int ct=0;
        for(int i=left;i<=right;i++)
        {
            string s=words[i];
            cout<<s<<"\n";
            int n=s.size();
            if(n==0)
            {
                if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u')ct++; 
            }
            else if((s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u')&&(s[n-1]=='a' || s[n-1]=='e' || s[n-1]=='i' || s[n-1]=='o' ||                 s[n-1]=='u'))
            {
                ct++;
            }
            s.clear();
        }
        return ct;
    }
};
