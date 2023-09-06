/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * insertAtTail(Node *head, int k) {

    Node *temp=head;
     Node *lastNode=new Node(k);
    if(temp==NULL)
    {
        return lastNode;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
        
     temp->next=lastNode;
   
    lastNode->prev=temp->next;
    lastNode->next=NULL;
    return head;

}
