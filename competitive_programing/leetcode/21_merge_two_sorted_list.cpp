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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        
         ListNode* newlist=new ListNode;
         ListNode* temp3,*head=0;
         
         while(temp1!=NULL && temp2!=NULL)
         {
                    newlist=new ListNode;

            if(temp1->val<temp2->val)
            {

                newlist->val=temp1->val;
                newlist->next=0;
                if(head==0)
                {
                    head=temp3=newlist;
                }
                else
                {
                    temp3->next=newlist;
                    temp3=newlist;
                }
                temp1=temp1->next;
            }
            else
            {
                newlist->val=temp2->val;
                newlist->next=0;
                if(head==0)
                {
                    head=temp3=newlist;
                }
                else
                {
                    temp3->next=newlist;
                    temp3=newlist;
                }
                temp2=temp2->next;
            }
         }
         while(temp1!=0)
         {
               newlist=new ListNode;
              newlist->val=temp1->val;
                newlist->next=0;
                if(head==0)
                {
                    head=temp3=newlist;
                }
                else
                {
                    temp3->next=newlist;
                    temp3=newlist;
                }
                temp1=temp1->next;
         }
         while(temp2!=0)
         {
               newlist=new ListNode;
              newlist->val=temp2->val;
                newlist->next=0;
                if(head==0)
                {
                    head=temp3=newlist;
                }
                else
                {
                    temp3->next=newlist;
                    temp3=newlist;
                }
                temp2=temp2->next;
         }
         return head;
    }
};