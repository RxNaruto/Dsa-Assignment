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

int keyElement(node* head,int key){
    node* current=head;
    int count=1;
    while(current!=nullptr){
        if(current->data==key){
            return count;

        }
       else{
         count++;
        current=current->next;
       }
    }
    return -1;
}
int main()
{
    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(13);
    node* tail = new node(4);

    head->next=second;
    second->next=third;
    third->next=tail;

    cout<<"The element 13 is present at "<<keyElement(head,13);
 return 0;
}