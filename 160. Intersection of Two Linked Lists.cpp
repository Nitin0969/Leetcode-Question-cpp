int getlen(ListNode * head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}
ListNode*get_intersect_point(int d,ListNode*headA,ListNode*headB){
    ListNode*curr1 = headA;
    ListNode*curr2 = headB;

    for(int i=0;i<d;i++){
        if(curr1==NULL){
          return NULL;
        }
        curr1 = curr1->next;
    }
    while(curr1!=NULL && curr2!=NULL){
           if(curr1 == curr2){
            return curr1;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return NULL;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
      int c1 = getlen(headA);
      int c2 = getlen(headB);
      int d;
      if(c1 > c2){
          d = c1-c2;
          return get_intersect_point(d,headA,headB);
      } 
      else{
          d = c2-c1;
          return get_intersect_point(d,headB,headA);
      }
    }