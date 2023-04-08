class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) 
    {
        int ct=0;
        int maxsum=0;
        if(arr.size()<k)return -1;
        for(int i=0;i<k;i++)
        {
         maxsum+=arr[i];
        }
        if(floor(maxsum/k)>=threshold)ct++;
        int window_sum=maxsum;
        for(int i=k;i<arr.size();i++)
        {
            window_sum+=arr[i]-arr[i-k];
            if(floor(window_sum/k)>=threshold)ct++;
        }
       
        return ct;
    }
};
