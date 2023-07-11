#include <iostream>

using namespace std;
class node{
    public:
    int data;
    node*next;
    
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(node*&head,node*&tail,int data){
    if(head == NULL){
        node*temp = new node(data);
        head = temp;
        tail = temp;
        // return head;
    }
      
    else{
        node*temp = new node(data);
        temp->next = head;
        head = temp;
    }
}
void insertattail(node*&head,node*&tail,int data){
    if(head == NULL){
        node*temp = new node(data);
        tail = temp;
        head = temp;
    }
    else{
        //new node creation
        node*temp = new node(data);
        tail->next = temp;
        tail = temp;
    }
}
void print(node*head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}
node*kreverse(node*head,int k){
       //base case
    int n=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            n++;
        }
        if(n/k==0)
        {
            return head;
        }
        node*curr = head;
        node*prev = NULL;
        node*next = NULL;
        int cnt = 0;
        while(curr!=NULL && cnt < k){
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
           cnt++;
        }
        //recusrion
        if(next!=NULL){
            head->next = reverseKGroup(next,k);
        }
        head = prev;
        return prev;
 
}
int main()
{
    node*head = NULL;
    node*tail = NULL;
    insertattail(head,tail,12);
    insertattail(head,tail,13);
    insertattail(head,tail,14);
    insertattail(head,tail,15);
    print(head);
    // insertattail(head,tail,16);9
    // int k = 2;
   head = kreverse(head, 2);
    print(head);
}