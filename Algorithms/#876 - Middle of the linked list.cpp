ListNode* middleNode(ListNode* head) {
    ListNode* temp = head;
    int count=0;
    while(head != NULL) {
        count++;
        head=head->next;
    }
    int idx = count/2;
    int i=0;
    while(i<idx) {
        temp=temp->next;
        i++;
    }
    return temp;        
}