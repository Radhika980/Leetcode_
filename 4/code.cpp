class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
      
        double med;
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        
       
        int n=nums1.size();
        sort(nums1.begin(),nums1.end());
       
        int m,l;
        
            if(n%2==0)
            {
                m=n/2;
                l=m-1;
                med=(nums1[m]+nums1[l])/(double)2;
            }
            else
            {
                m=n/2;
                med=nums1[m];
            }
        
        return med;
    }
};
