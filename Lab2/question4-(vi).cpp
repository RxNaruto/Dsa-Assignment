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