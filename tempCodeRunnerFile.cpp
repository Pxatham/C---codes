#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode; // First node becomes the head
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // Traverse to the end of the list
    }
    temp->next = newNode; // Link the new node at the end
}
int main() {
    Node* head = NULL; // Start with an empty list

    // Use your function to build the list
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40); // Adding a 4th node easily!

    // Print
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}