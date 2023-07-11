ListNode* removeElements(ListNode* head, int val) {
      if (head == NULL) {
            return NULL;
        }

        ListNode*dummy = new ListNode();
        dummy->next = head;
        ListNode*cur = head;
        ListNode*prev = dummy;

        while (cur != NULL) {
            if (cur->val == val) {
                prev->next = cur->next;
            } else {
                prev = cur;
            }
            cur = cur->next;
        }

        return dummy->next;
    }