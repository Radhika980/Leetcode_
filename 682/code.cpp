class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
         int sum = 0;
         int n=operations.size();
      stack <int>s;
    for(int i=0;i<n;i++)
    {
       if(operations[i]=="+") 
       {
         int a=s.top();
           s.pop();
          int b=s.top();
        int add=a+b;
       s.push(a);
        s.push(add);
        sum+=add;
       }
       else if(operations[i]=="D") 
       {
          int c=s.top();
          int d=2*c;
        
          s.push(d);
          sum+=d;
       }
       else if(operations[i]=="C")
       {
           int ck=s.top();
         s.pop();
         sum-=ck;
       } 
     else
     {
         s.push(stoi(operations[i]));
         sum+=stoi(operations[i]);
     } 
    
    }
   return sum;
    } 
};
