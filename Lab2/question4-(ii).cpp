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
void countSum(node* head){
    int count=0,sum=0;
    node* current=head;
    while(current!=nullptr){
        count++;
        sum+=current->data;
        current=current->next;


    }
    cout<<"The sum of nodes is "<<sum<<endl;
    cout<<"The count of node is "<<count<<endl;
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

    countSum(head);

 return 0;
}