
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
       stack<int>st;
       int j=0,i=0;  
       if(pushed==popped)return true;
       
       while(i<pushed.size())
       {
           if(st.empty()==true)
           {
               st.push(pushed[i]);
               i++;
           }
           else if(st.top()!=popped[j])
           {
                st.push(pushed[i]);
                i++;
           }
            else if(j<popped.size() && st.top()==popped[j])
           {
                    st.pop();
                    j++;
            }
          
       }
    
    while(j<popped.size())
    {
        if(st.top()==popped[j] )
           {
               st.pop();
               j++;
           }
           else return false;
    }
        if(st.empty()==true)
      return true;
      else return false;
      
    }
};
