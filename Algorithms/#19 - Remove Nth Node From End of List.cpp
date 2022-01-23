ListNode* deleteNode(ListNode* &node) {
    if(node->next != NULL) {
        node->next = node->next->next;
    }
    return node;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* temp = head;
    ListNode* finalAns = head;
    int count=0;
    while(head != NULL) {
        count++;
        head=head->next;
    }
    int idx=0;
    
    if(n==count && count > 1) {
        return finalAns->next;   
    } else
        idx = count-n;
    if(idx==0) {
        return NULL;
    }
    int i=0;
    while(i<idx-1) {
        i++;
        temp=temp->next;
    }
    ListNode* ans = deleteNode(temp);
    
    return finalAns;
}