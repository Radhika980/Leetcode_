class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord)
    {
        if(sentence.substr(0,searchWord.size())== searchWord)
        {
            return 1;
        }
        int ct=1;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            {
                ct++;
                if(sentence.substr(i+1,searchWord.size())==searchWord)
                {
                    return ct;
                }
            }
        }
      return -1;  
    }
};
