class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {
        string ans="";
        int n=word1.length();
        int m=word2.length();
        int j=min(n,m);
       for(int i=0;i<j;i++)
        {
        ans+=word1[i];
        ans+=word2[i];
       }
       for(int i=j;i<n;i++)
        {
        ans+=word1[i];
       
       }
       for(int i=j;i<m;i++)
        {
      
        ans+=word2[i];
       }
        return ans;
        
    }
};
