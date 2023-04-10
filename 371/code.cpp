class Solution {
public:
    int getSum(int a, int b)
    {
        if(b>0)
        {
            while(b--)
            {
                a++;
            }
            return a;
        }
        else
        {
            while(b++)
            {
                a--;
            }
            return a;
        }
      return 0; 
    }
};
