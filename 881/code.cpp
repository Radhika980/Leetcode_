class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        sort(people.begin(),people.end());

        int ct=0,i=0;
        int j=people.size()-1;
       while(i<=j)
        {
                if(people[j]==limit)
                {
                          ct++;
                          j--;
                }
                else if(people[i]+people[j]<=limit)
                {
                          ct++;
                          i++;
                          j--;

                }
                else if(people[j]<=limit)
                {
                          ct++;
                          j--;
                }
               
                 //i++;
                 //j--;
           
         }
      
        return ct;
        
    }
};
