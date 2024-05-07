#include <iostream>
using namespace std;
struct StackNode {
    int data;
    StackNode* next;
};

struct Stack {
    StackNode* top;
    Stack() {
        top = nullptr; 
    }
    void push(int value) {
        StackNode* newNode = new StackNode;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to the stack.\n";
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!\n";
            return -1; 
        }
        int poppedValue = top->data;
        StackNode* temp = top;
        top = top->next;
        delete temp;
        return poppedValue;
    }
    bool isEmpty() {
        return top == nullptr;
    }
    bool isFull() {
        return false;
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        }
        return top->data;
    }
    int stackTop() {
        return -1;
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << endl;

    cout << stack.pop() << " popped from the stack.\n";
    cout << "Top element: " << stack.peek() << endl;

    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is stack full? " << (stack.isFull() ? "Yes" : "No") << endl;

    return 0;
}
