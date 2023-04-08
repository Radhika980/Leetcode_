/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) 
    {
        ListNode* temp=head;
        vector<int>ans;
        int sum=0;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        reverse(ans.begin(),ans.end());
         for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
        }
        for(int i=0;i<ans.size();i++)
        {
            sum=sum+pow(2,i)*ans[i];
        }
      return sum;
        
    }
};
