class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k)
    {
        vector<int>answer;
        vector<float>fr;
        float fraction,frac;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                
                fr.push_back(float(arr[i])/(arr[j]));
            }
        }
        sort(fr.begin(),fr.end());
        k--;
        frac=fr[k];
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                fraction=(float(arr[i])/(arr[j]));
                if(frac==fraction)
                {
                    answer.push_back(arr[i]);
                    answer.push_back(arr[j]);
                    return answer;
                }
            }
        }
        
        return arr;
        
    }
};
