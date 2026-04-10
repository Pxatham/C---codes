#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *node1 = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;

    node3->next = NULL;
    Node *head = node1;
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        cout << temp->next;
    }

    return 0;
}