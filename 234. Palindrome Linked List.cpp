#include<vector>
class Solution {
public:
bool checkplaindrome( vector<int>arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(arr[s] != arr[e] ){
            return false;
        }
       s++;
       e--;  
        }
        return true;
    }
   
    ListNode*getmid(ListNode*head){
        ListNode*slow = head;
        ListNode*fast = head->next;
        while(fast!= NULL && fast->next!=NULL){
            fast =fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
   ListNode* reverse(ListNode*head){
       ListNode*curr = head;
       ListNode*prev = NULL;
       ListNode*next = NULL;
       while(curr!=NULL){
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
       }
       return prev;
   }
    bool isPalindrome(ListNode* head) {
       //approch 1 :-
       //T.C = 0(n);
       //S.C = 0(n);
    /*
    vector<int>arr;
    ListNode*temp = head;
    while(temp!=NULL){
        arr.push_back(temp->val);
        temp = temp->next;
    }
    return checkplaindrome(arr);
    */

    //approch 2 :- T.C 0(1);
        // 1) find mid
        // 2) reverse after mid
        // 3) compare both list
    
    if(head == NULL || head->next == NULL){
        return true;
    }
    //step 1 find mid
    ListNode*mid = getmid(head);
    //step2 reverse from middle
    ListNode*temp = mid->next;
    mid->next = reverse(temp);
    //step3 compare both parts

    ListNode*head1 = head;
    ListNode*head2 = mid->next;
    while(head2!=NULL){
        if(head1->val !=head2->val){
            return false;
        }
        else{
            head1=head1->next;
            head2= head2->next;
        }
    }
    temp = mid->next;
    mid->next = reverse(temp);
    return true;
    }
};