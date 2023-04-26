class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) 
    {
        vector<int>ans;
        set<int>s1;
        set<int>s2;
        set<int>s3;
        set<int>s4;
        for(int i=0;i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            s2.insert(nums2[i]);
        }
        for(int i=0;i<nums3.size();i++)
        {
            s3.insert(nums3[i]);
        }
        for(auto it:s1)
        {
            if(find(s2.begin(),s2.end(),it)!=s2.end())
            {
                s4.insert(it);
            }
        }
        for(auto it:s2)
        {
            if(find(s3.begin(),s3.end(),it)!=s3.end())
            {
                s4.insert(it);
            }
        }
        for(auto it:s1)
        {
            if(find(s3.begin(),s3.end(),it)!=s3.end())
            {
                s4.insert(it);
            }
        }
        for(auto x:s4)
        {
            ans.push_back(x);
        }
        return ans;
    }
};
