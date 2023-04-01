
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int s=0;
        int e=nums.size();
        int mid=(s+e)/2;
        if(nums.size()==1 && nums[0]!=target)return -1;
        while(s<=e)
        {
            mid=(s+e)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target)s=mid+1;
            else if(nums[mid]>target)e=mid-1;
        }
        return -1;
        
    }
};
