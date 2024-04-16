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
    Node* mergeSortedLists(Node* list1, Node* list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        Node* merged = nullptr;
        if (list1->data <= list2->data) {
            merged = list1;
            merged->next = mergeSortedLists(list1->next, list2);
        } else {
            merged = list2;
            merged->next = mergeSortedLists(list1, list2->next);
        }
        return merged;
    }
    void mergeWith(LinkedList& otherList) {
        head = mergeSortedLists(head, otherList.head);
        otherList.head = nullptr;  
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
    list1.mergeWith(list2);
    cout << "Merged List: ";
    list1.printList();
    return 0;
}
