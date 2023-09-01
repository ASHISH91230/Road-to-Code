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
    ListNode* sortList(ListNode* head) {
        ListNode *temp=head;
        vector<int> vec;
       while(temp!=NULL)
       {
           vec.push_back(temp->val);
           temp=temp->next;

       }
       sort(vec.begin(),vec.end());
                  ListNode *temp2=new ListNode;
                   ListNode *temp3=temp2;

       for(int i=0;i<vec.size();i++)
       {
           temp3->next=new ListNode(vec[i]);
           temp3=temp3->next;

       }
       return temp2->next;
        
    }
};