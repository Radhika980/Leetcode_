class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        string temp="";
        int j=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]!=ch)
            {
                temp+=word[i];
               
            }
            else if(word[i]==ch)
            {
                temp+=word[i];
                reverse(temp.begin(),temp.end());
                j=i;
                break;
            }
           
        }
        if(temp.size()==word.size())return temp;
        cout<<temp;
        if(temp.empty()!=true)
        {
            for(int i=j+1;i<word.size();i++)
            {
                temp+=word[i];
            }

        }
        
        return temp;
        
    }
};
