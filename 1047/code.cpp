class Solution {
public:
    string removeDuplicates(string s)
    {
      string ans;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty()==true)st.push(s[i]);
            else if(s[i]!=st.top())st.push(s[i]);
            else st.pop();
        }
        while(st.empty()!=true)
        {
         ans+=st.top();
         st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;   
    }
};
