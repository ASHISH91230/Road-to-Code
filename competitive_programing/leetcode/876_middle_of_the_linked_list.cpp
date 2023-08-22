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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        int value=0;
        ListNode *temp=head;
        ListNode *temp1=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if(count%2==0)
        {
            count=count/2;
            count=count+1;
             cout<<"count value in if is"<<count<<endl;
        }
       
        else{
            count=count/2;
            count=count+1;
            cout<<"count value in else is"<<count<<endl;
        }
         
        while(count-1!=value)
        {
            temp1=temp1->next;
            
            value++;
        }
        cout<<temp1->val<<endl;
    return temp1;
    }

};