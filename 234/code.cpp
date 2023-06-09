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
    bool isPalindrome(ListNode* head)
    {
        vector<int>ans;
        bool t;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        t=check(ans);
        return t;
    }
    bool check(vector<int>ans)
    {
        int l=0;
        int r=ans.size()-1;
        while(l<=r)
        {
            if(ans[l]==ans[r])l++,r--;
            else return false;
        }
        return true;
    }
};
