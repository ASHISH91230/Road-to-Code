
/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    if(x == 1){
        return head->next;
    }
    Node* prev = head;
    
    x -= 2;
    
    while(x--){
        prev = prev->next;    
    }
    prev->next = prev->next->next;
    return head;
}