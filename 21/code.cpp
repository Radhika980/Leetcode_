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
    void cal(ListNode*& headdd,int data) 
  {
    ListNode* try1=new ListNode(data);
    
      if(headdd==NULL)
        {
        headdd=try1;
        return;
        }
        ListNode* head4=headdd;
      while(head4->next!=NULL)
      {
        head4=head4->next;
      }
        head4->next=try1;
      return;
  }
 
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
      ListNode* head=list1;
      ListNode* headd=list2;
      ListNode* headdd=NULL;
      if(head==NULL && headd==NULL)return NULL;
      else if(head==NULL && headd!=NULL)return headd;
      else if(head!=NULL && headd==NULL)return head;
      else
      {
        while(head!=NULL && headd!=NULL)
        {
          if((head->val)<(headd->val))
          {
            cal(headdd,head->val);
            head=head->next;
            cout<<"c1"<<"\n";
          }
          else if((head->val)==(headd->val))
          {
            cal(headdd,head->val);
            cal(headdd,headd->val);
            head=head->next;
            headd=headd->next;
             cout<<"c2"<<"\n";
          }
          else if((head->val)>(headd->val))
          {
            cal(headdd,headd->val);
            headd=headd->next;
             cout<<"c3"<<"\n";
          }
        }
          while(head!=NULL )
          {
            cal(headdd,head->val);
            head=head->next;
            cout<<"c1"<<"\n";
          }
          while(headd!=NULL )
          {
            cal(headdd,headd->val);
            headd=headd->next;
            cout<<"c1"<<"\n";
          }
        }
        return headdd;
      }
};
