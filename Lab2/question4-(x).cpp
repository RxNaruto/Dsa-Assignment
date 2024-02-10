#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    
    node(int val){
        data=val;
        next=nullptr;
        prev=nullptr;
    }
};
void displayDLL(node* head){
    node* current = head;
    while(current!=nullptr){
        cout<<current->data<<"->";
        current=current->next;
    }
    cout<<"NULL"<<endl;
}
void reverseDLL(node* &head) {
    node* current = head;
    node* prev = nullptr;
    while (current != nullptr) {
        node* nextptr = current->next;
        current->next = prev;
        current->prev = nextptr;
        prev = current;
        current = nextptr;
    }
    head = prev;
    displayDLL(head);
}

int main()
{
    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* forth = new node(4);

    head->next=second;
    second->next=third;
    second->prev=head;
    third->next=forth;
    third->prev=second;

    displayDLL(head);
    reverseDLL(head);
 return 0;
}