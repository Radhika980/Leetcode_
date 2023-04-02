class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
    {
         vector<int>ans;
         int ct=0;
         sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++)
        {
           long long p=ceil(floor(success)/spells[i]);
           //long long p=floor(success)/spells[i];
           cout<<p;
           int idx=lower_bound(potions.begin(),potions.end(),p)-potions.begin();
           ct=potions.size()-idx;
            ans.push_back(ct);
            ct=0;
        }
       return ans; 
    }
};
