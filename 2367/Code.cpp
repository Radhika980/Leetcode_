class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff)
    {
       int c=0;
       for(int i=0;i<nums.size();i++)
       {
        int no1=nums[i]+diff;
        if(count(nums.begin(),nums.end(),no1)>0)
        {
          int no2=no1+diff;
           if(count(nums.begin(),nums.end(),no2)>0)
            {
              c++;
            }
        }
       }
       return c;
    }
};
