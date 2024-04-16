#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=nullptr;
    }
};

bool checkLLSorted(node* head){
    node* current =head;
    while(current->next!=nullptr){
        if(current->data>current->next->data){
            return false;
        }
        else{
            current=current->next;
        }
    }
    return true;
}
int main()
{
    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* tail = new node(4);

    head->next=second;
    second->next=third;
    third->next=tail;

    cout<<checkLLSorted(head)<<endl;
 return 0;
}