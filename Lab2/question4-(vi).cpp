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

void mergingLL(node* head1,node* head2){
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummynode = new node(-1);
    node* ptr3=dummynode;
    while(ptr1!=nullptr && ptr2!=nullptr){
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
        ptr3->next=ptr2;
        ptr2=ptr2->next;


    }
}
int main()
{
    node* n1=new node(1);
    node* n2=new node(3);
    node* n3=new node(5);
    node* n4=new node(7);
    node* n5=new node(9);

    node* p1=new node(2);
    node* p2=new node(4);
    node* p3=new node(6);
    node* p4=new node(8);



 return 0;
}