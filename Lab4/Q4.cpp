#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int>fwd;
    stack<int>bwd;
    public:
    void enqueue(int x){
        fwd.push(x);
    }
    int dequeue(){
        if(fwd.empty() && bwd.empty()){
            cout<<"Both stacks are empty"<<endl;
        }
        if(bwd.empty()){
            while(!fwd.empty()){
                bwd.push(fwd.top());
                fwd.pop();
            }
        }
        int topval = bwd.top();
        bwd.pop();
        return topval;
    }
    bool isempty(){
        if(fwd.empty() && bwd.empty()){
            return true;
        }
        else{
        return false;
        }
    }
   
};
int main()
{
    queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.isempty();
 return 0;
}