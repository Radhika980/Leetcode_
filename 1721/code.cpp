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
    ListNode* swapNodes(ListNode* head, int k) 
    {
       ListNode* temp=head;
       ListNode* temp1=head;
       ListNode* temp2=head;
       int ct=0;
       while(temp!=NULL)
       {
           ct++;
           temp=temp->next;
       } 
       int ct1=0;
       temp=head;
       while(temp!=NULL)
       {
           ct1++;
           if(ct1==k)
           {
               temp1=temp;
           }
            if(ct1==ct-k+1)
           {
               temp2=temp;
           }
           temp=temp->next;
       }
       swap(temp1->val,temp2->val);
      return head;  
    }
};
