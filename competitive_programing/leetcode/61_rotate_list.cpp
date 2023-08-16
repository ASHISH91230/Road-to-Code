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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head,*prev=head;
        temp=head;
        int c=0;
        if(head==0||head->next==0)return head;
        while(temp!=0)
        {
            c++;
            temp=temp->next;
        }
        temp=head;
        int i=0;
        int n=k%c;
       while(i<n)
        {
            temp=prev;
            while(temp->next->next!=0)
            {
                temp=temp->next;
                
            }
            cout<<temp->val;
            ListNode*temp1=new ListNode;
            temp1=temp->next;
;            
            temp->next=0;
          
            temp1->next=prev;
            prev=temp1;

           
            i++;
        }
        
        return prev;

    }
};