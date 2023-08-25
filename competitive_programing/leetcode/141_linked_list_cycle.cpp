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
    bool hasCycle(ListNode *head) {
        ListNode*temp;
        temp=head;
        while(temp!=NULL&& temp->next!=NULL)
        {
            if(temp->next==head)
            return true;
            temp=temp->next->next;
            head=head->next;
        }
        return false;
    }
};