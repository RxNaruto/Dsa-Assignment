#include <iostream>
using namespace std;

class PriorityQueue {
private:
    struct Node {
        int value;
        int priority;
        Node* next;
    };

    Node* front;

public:
    PriorityQueue() : front(nullptr) {}

    void enqueue(int value, int priority) {
        Node* newNode = new Node;
        newNode->value = value;
        newNode->priority = priority;
        newNode->next = nullptr;

        if (front == nullptr || priority > front->priority) {
            newNode->next = front;
            front = newNode;
        } else {
            Node* current = front;
            while (current->next != nullptr && current->next->priority >= priority) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
        cout << "Enqueued value " << value << " with priority " << priority << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Priority queue is empty." << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        cout << "Dequeued value " << temp->value << " with priority " << temp->priority << endl;
        delete temp;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Priority queue is empty." << endl;
            return;
        }
        cout << "Front element: " << front->value << " with priority " << front->priority << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(10, 2);
    pq.enqueue(20, 1);
    pq.enqueue(30, 3);
    pq.enqueue(40, 2);

    pq.dequeue();
    pq.peek();

    pq.dequeue();
    pq.peek();

    return 0;
}
