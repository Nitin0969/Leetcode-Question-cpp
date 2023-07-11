/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

 bool hasCycle(ListNode *head) {
        /* 
        // aaproch 1 using Map
      if(head == NULL){
          return false;
      }
      map<ListNode*,bool>visited;
      ListNode*temp = head;
        while(temp!=NULL){
            //cycle is present
            if(visited[temp] == true){
                return true;
            }
            visited[temp] = true;
            temp = temp->next;
        }
        return false;
        */
        // Approch 2:- using flyod's cycle detection loop
        
        ListNode*slow = head;
        ListNode*fast = head;
        if(head == NULL || head->next==NULL){
            return false;
        }
        while(slow!=NULL && fast!=NULL){
            
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;
             if(fast == slow){
            return true;
        }
        }
        return false;
       

    }
