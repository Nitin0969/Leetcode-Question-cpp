 ListNode* middleNode(ListNode* head) {
        ListNode*slow = head;
        ListNode*fast = head;
        while(fast!=NULL && fast->next!=NULL){
             slow = slow->next;
            fast = fast->next;
            if(fast!=NULL){
               fast = fast->next; 
            }
           
        }
        return slow;
    }