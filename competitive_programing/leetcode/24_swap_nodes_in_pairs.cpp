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
    ListNode* swapPairs(ListNode* head) {
         if(head == NULL) return NULL;
        ListNode* curr = head;
        ListNode* nn = NULL;
        ListNode* prev = NULL;

        int ct = 0;
        while(curr != NULL && ct < 2){
            nn = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nn;
            ct++;
        }

        head->next = swapPairs(nn); 
        return prev;
                                                                 
                                                                                                                                                                  
    }
};