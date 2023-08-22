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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp=head,*temp1=head;
               
        if(head==0||head->next==0)
        {
            return head;
        }
        
        
        
        while(temp!=0&&temp1!=0)
        {
            
            while(temp!=0&&temp1!=0&&temp1->val==temp->val)
            {
               
                    
                    
                    temp=temp->next;
                    
                    
                }
            
          temp1->next=temp;
          temp1=temp;

        }      
        
        
        return head;
    }
};