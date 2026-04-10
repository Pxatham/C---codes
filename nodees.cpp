#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *head = new Node();
    head->data = 1;
    head->next = nullptr;

    Node *second = new Node();
    second->data = 2;
    second->next = nullptr;

    Node *tail = new Node();
    tail->data = 3;
    tail->next = nullptr;

    head->next = second;
    second->next = tail;
    tail->next = nullptr;

    cout << "First node data: " << head->data << endl;
    cout << "Second node data: " << head->next->data << endl;
    cout << "Third node data: " << head->next->next->data << endl;

    // Clean up memory
    delete tail;
    delete second;
    delete head;

    return 0;
}