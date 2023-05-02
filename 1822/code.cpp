class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int pos=0,neg=0;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            if(x==0)return 0;
            else if(x>0)pos++;
            else if(x<0)neg++;
          
        }
        
        if(neg%2==0)return 1;
        
        else return -1;  
    }
};
