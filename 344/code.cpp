
class Solution {
public:
    void reverseString(vector<char>& s) 
    {
         int i=0;
         int j=s.size()-1;
          while(i<j)
         {
          swap(s[i],s[j]);
          i++;
          j--;

         }
          for(int k=0;k<s.size();k++)
         {
           cout<<s[k];
         }
        
    }
};
