 ListNode* reverseList(ListNode* head) {
      
    //   Iterative method
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode*curr = head;
        ListNode*next = NULL;
        ListNode*prev = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;

     
    }