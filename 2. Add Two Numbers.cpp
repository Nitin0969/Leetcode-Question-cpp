ListNode*reverse(ListNode*head){
    ListNode*curr= head;
    ListNode*prev = NULL;
    ListNode*next = NULL;
    while(curr!=NULL){
        curr->next = next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return head;

}
void insertattail(ListNode*&head,ListNode*&tail,int val){
    ListNode*temp =  new ListNode(val);
    if(head == NULL){
        head = temp;
        tail = temp;
        return ;
    }
    else{
       tail->next = temp;
       tail = temp;
    }
}
ListNode*add(ListNode*first,ListNode*second){
    int carry = 0;
    ListNode*anshead = NULL;
    ListNode*anstail = NULL;

    while(first!=NULL || second!=NULL||carry!=0){
        int val1 = 0;
        int val2 = 0;
        if(first!=NULL){
            val1 = first->val;
        }
        if(second!=NULL){
            val2 = second->val;
        }
        int sum = carry+val1+val2;

        int digit = sum%10;
        
        insertattail(anshead,anstail,digit);
        carry = sum/10;

        if(first!=NULL){
             first = first->next;
        }
        if(second!=NULL){
            second=second->next;
        }
    }

    
    return anshead;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //add both
        ListNode*ans = add(l1,l2);
        return ans;


    }