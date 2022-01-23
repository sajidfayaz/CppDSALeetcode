ListNode* removeElements(ListNode* head, int val) {
    if(head==NULL) {
        return NULL;
    }
    
    while(head && head->val == val) {
        head = head->next;
    }
    
    ListNode* temp = head;
    
    while(temp!=NULL) {
        if(temp->next && temp->next->val == val) {
            temp->next = temp->next->next;
        } else {
            temp=temp->next;
        }
    }
    return head;
}