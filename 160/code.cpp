/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *temp=headA;
        ListNode *tempp=headB;
        unordered_map<ListNode*,int>mp;
        while(temp!=NULL)
        {
            mp[temp]++;
            temp=temp->next;
        }
        while(tempp!=NULL)
        {
            if(mp[tempp]!=0)
            {
                return tempp;
            }
            tempp=tempp->next;
        }
        return NULL;
    }
};
