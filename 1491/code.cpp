class Solution {
public:
    double average(vector<int>& salary) 
    {
        double avg=0.000;
        double sum=0.000;
        int n=salary.size();
        int m=*max_element(salary.begin(),salary.end());
        int idx=find(salary.begin(),salary.end(),m)-salary.begin();
        salary.erase(salary.begin()+idx);
        n--;
        int mi=*min_element(salary.begin(),salary.end());
        int idxi=find(salary.begin(),salary.end(),mi)-salary.begin();
        salary.erase(salary.begin()+idxi);
        n--;
        cout<<m<<"\n";
        cout<<mi<<"\n";
        cout<<idx<<"\n";
        cout<<idxi<<"\n";
       
        
         for(int i=0;i<n;i++)
        {
            cout<<salary[i]<<"\n";
           
        }
        for(int i=0;i<n;i++)
        {
            sum+=salary[i];
           
        }
        avg=sum/n;
        return avg;
        
    }
};
