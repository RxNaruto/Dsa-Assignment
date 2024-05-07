#include<iostream>
using namespace std;
int n=10;
class stack{
    public:
    int* arr;
    int top;

    stack(){
        arr=new int[n];
        top=-1;

    }
    void push(int x){
        if(top==(n-1)){
            cout<<"The stack is full"<<endl;
            return;

        }
        top++;
        arr[top]=x;
        cout<<"The element "<<arr[top]<<" is pushed to stack"<<endl;
    }
    void pop(){
        if(top==-1){
            cout<<"The stack is already Empty"<<endl;
        }
        top--;
        cout<<"The element "<<arr[top+1]<<" is poped from the stack"<<endl;
    }
    bool isFull(){
        if(top==(n-1)){
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
   
    void peek(){
        cout<<arr[top]<<endl;
    }
    int stackTop(){
        return arr[top];
    }
};
int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.pop();
    s1.pop();
    s1.pop();
    cout<<"The stack top is :"<<s1.stackTop()<<endl;
    

 return 0;
}