#include <iostream>
 struct Node{
   int data;
   Node* next;
   Node(int data){
       this->data = data;
       this->next = nullptr;
   }
 };
int solve(Node* head){
    Node* prev=head;
    Node* current=head->next;
    int c=0;
    while(current->next!=NULL && current!=NULL){
        if((current->data > current->next->data && current->data > prev->data)||(current->data < current->next->data && current->data < prev->data)){
            c++;
        }
        
        prev=current;
        current=current->next;
    }
    return c;
}