ListNode* deleteDuplicates(ListNode* head) {
    if(!head || head->next == NULL) {
        return head;
    }
    
    ListNode* curr = head->next;
    ListNode* prev = head;
    
    while(curr!=NULL) {
        
        while(curr && prev->val == curr->val) {
            prev->next = prev->next->next;
            curr = prev->next;
        }
        
        prev = curr;
        if(curr)
            curr = curr->next;
        
    }
    
    return head;
}
