#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};
class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void concatenate(LinkedList& otherList) {
        if (!head) {
            head = otherList.head;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = otherList.head;
        }
        otherList.head = nullptr;  // Set otherList's head to null to avoid double deletion
    }
};

int main() {
    LinkedList list1;
    list1.insert(1);
    list1.insert(3);
    list1.insert(5);

    LinkedList list2;
    list2.insert(2);
    list2.insert(4);
    list2.insert(6);

    cout << "List 1: ";
    list1.printList();
    cout << "List 2: ";
    list2.printList();

    list1.concatenate(list2);

    cout << "Concatenated List: ";
    list1.printList();

    return 0;
}
