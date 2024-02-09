#include <iostream>
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; 

class Solution {
  public:
        
        Node* removeDuplicates(Node* head) {
        if(head==NULL || head->next==NULL){return head;}
        Node* temp= head;
        while(temp->next!=NULL){
            if(temp->data==temp->next->data){
                Node* rem= temp->next;
                temp->next=temp->next->next;
                delete rem;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
        //cout<<head->data<<" ";
    }
};