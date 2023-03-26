class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int m=*max_element(nums.begin(),nums.end());
        int index=0;
        for(int i=0;i<nums.size();i++)
        {
            if(m==nums[i])index=i;
        }
       
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=2*nums[i];
        }
         
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=index)
            {
               if(m>=nums[i])
              {
                 flag=1;
              }
              else
              {
                  flag=0;
                  break;
              }
            }
        }
        if(flag==1)return index;
        else return -1;
        
    }
};
