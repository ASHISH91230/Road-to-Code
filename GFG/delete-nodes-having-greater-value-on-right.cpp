Node *compute(Node *head)
    {
        // your code goes here
        Node* h = head;
        Node* n = h;
        while(h->next!=NULL){
            if(h->data<h->next->data){
                n=h;
                n->data = n->next->data;
                n->next = n->next->next;
                h=head;
            }else{
                h=h->next;
            }
        }
        
        return head;
    }