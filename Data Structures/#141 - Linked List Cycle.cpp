bool hasCycle(ListNode *head) {
    ListNode* jumpOne=head;
    ListNode* normal=head;
    while(jumpOne != NULL) {
        if(jumpOne->next == NULL) {
            return false;
        }
        
        jumpOne=jumpOne->next->next;
        normal=normal->next;
        
        if(jumpOne==normal) {
            return true;
        }
    }
    return false;
}