class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
      vector<int>ans;
      vector<int>ans1;
      for(int i=0;i<arr2.size();i++)
      {
          int k=arr2[i];
          if(find(arr1.begin(),arr1.end(),k)!=arr1.end())
          {
              int c=count(arr1.begin(),arr1.end(),k);
              while(c--)
              {
                  ans.push_back(k);
              }
          }
      }
      for(int i=0;i<arr1.size();i++)
      {
          int x=arr1[i];
          if(find(ans.begin(),ans.end(),x)==ans.end())
          {
              ans1.push_back(x);
          }
      }
      sort(ans1.begin(),ans1.end());
      for(int i=0;i<ans1.size();i++)
      {
          ans.push_back(ans1[i]);
      }
      
      return ans;  
    }
};
