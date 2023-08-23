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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        if(tempA==tempB)
        {
            return tempA;
        }
        while( tempA!=tempB)
        {
           
            tempA=headA;
            // tempA=tempA->next;
            while(tempA!=NULL && tempB!=NULL)
            {
                  if(tempA==tempB)
                  {
                     return tempA;
                   }
                  else{
                     tempA=tempA->next;
                     }
            }
            
            tempB=tempB->next;

        }
        return 0;
    }
};