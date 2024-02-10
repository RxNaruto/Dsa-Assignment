#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
    }
};
void displayCLL(node* head){
    node* current = head;
    for(int i=0;i<10;i++){
        cout<<current->data<<" -> ";
        current=current->next;

    }
}
int main()
{
    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* forth = new node(4);
    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=head;
    displayCLL(head);


 return 0;
}