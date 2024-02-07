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
void display(node* head){
    node* current=head;
    while(current!=nullptr){
        cout<<current->data<<"->";
        current=current->next;


    }
    cout<<"Null"<<endl;
}
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

void toDelete(node* &head,int key){
    node* current=head;
    
    while(current->next->data!=key){
        current=current->next;
    }
    node* toDelete = current->next;
    current->next=toDelete->next;
    delete toDelete;


}

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
 
    cout<<"The linked list is"<<checkLLSorted(head);

   
    

 return 0;
}