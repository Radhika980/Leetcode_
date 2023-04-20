class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
        map<ListNode *,int>mp;
         ListNode *temp=head;
         if(head==NULL)return NULL;
        while(temp!=NULL)
        {
             mp[temp]++;
            if(mp[temp] >1) return temp;
            temp=temp->next;
           
        }
        return temp;

       
    }
};
