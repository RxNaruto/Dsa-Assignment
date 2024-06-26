#include <iostream>
using namespace std;
struct Stack {
    static const int MAX_SIZE = 100;
    int items[MAX_SIZE];
    int top;
    Stack() {
        top = -1; 
    }
    void push(int value) {
        if (isFull()) {
            cout << "Stack is full"<<endl;
            return;
        }
        items[++top] = value;
        cout<<"The element "<<items[top]<<" pushed to stack"<<endl;
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty"<<endl;
            return -1;
        }
        int poppedValue = items[top--];
        return poppedValue;
    }
    bool isEmpty() {
        return top < 0;
    }
    bool isFull() {
        return top >= MAX_SIZE - 1;
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        }
        return items[top];
    }
    int stackTop() {
        return top;
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << endl;

    cout << stack.pop() << " popped from the stack"<<endl;
    cout << "Top element: " << stack.peek() << endl;

    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is stack full? " << (stack.isFull() ? "Yes" : "No") << endl;
    cout << "Index of stack top: " << stack.stackTop() << endl;

    return 0;
}
