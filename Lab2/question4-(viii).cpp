#include <iostream>
#include<stack>
using namespace std;
class Node {
public:
    int data;
    Node* next;
      Node(int x) {
        data = x;
         next = NULL;
    }
};
void reverseLL(Node** head)
{
    stack<Node*> s;
    Node* temp = *head;
    while (temp->next != NULL) {
        s.push(temp);
        temp = temp->next;
    }
    *head = temp;
    while (!s.empty()) {
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}
void printlist(Node* temp)
{
    while (temp != NULL) {
        cout << temp->data <<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void insert_back(Node** head, int value)
{
    Node* temp = new Node(value);
    temp->next = NULL;
    if (*head == NULL) {
        *head = temp;
        return;
    }
    else {
        Node* last_node = *head;
        while (last_node->next != NULL)
            last_node = last_node->next;
        last_node->next = temp;
        return;
    }
}
int main()
{
    Node* head = NULL;
    insert_back(&head, 1);
    insert_back(&head, 2);
    insert_back(&head, 3);
    insert_back(&head, 4);
    cout << "linked list before"<<endl;
    printlist(head);
    reverseLL(&head);
    cout << "Reversed linked list"<<endl;
    printlist(head);
    return 0;
}
