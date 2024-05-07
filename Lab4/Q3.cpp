#include<iostream>
using namespace std;
int n=100;
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr = new int[n];
        front =-1;
        back = -1;
    }
    void enqueue(int x){
        if(back==(n-1)){
            cout<<"Queue is full"<<endl;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }
    void dequeue(){
        if(front>back || front ==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front>back || front ==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }

    }
    bool isempty(){
        return (front>back || front ==-1);
    }
    bool isfull(){
        return(front==(n-1));
    }
};
int main()
{
    queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    cout<<q1.peek()<<endl;
    q1.dequeue();
    cout<<q1.peek()<<endl;
    q1.dequeue();
    cout<<q1.peek()<<endl;
    q1.dequeue();
     cout<<q1.peek()<<endl;
    q1.dequeue();
    cout<<q1.isempty();
 return 0;
}