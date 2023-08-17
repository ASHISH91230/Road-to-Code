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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=new ListNode;
        ListNode* temp1=new ListNode;
        temp=temp1=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;

        }
        temp=head;
        int index=count-n;
        if(index==0&&n==0)
        {
            return head;
        }
        if(index==0&&n==1)
        {
    
            head=0;
            return head;
        }
        if(count==n)
        {
            head=temp->next;
            return head;
        }
        while(index>1)
        {
            
            temp=temp->next;
           index--;
        }
         temp1=temp->next;
            temp->next=temp1->next;

    return head;
    }
};