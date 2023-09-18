#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void printll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};
Node *insertNode(Node *head, int data, int i)
{
    Node *newNode = new Node(data); // this line creates a new node
    Node *temp = head;              // temporary node of a main node

    int count = 0;
    if (i == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    while (count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {

        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    }
    return head;
};
int main()
{
    Node n1(1);
    Node *head = &n1;

    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    printll(head);
    head = insertNode(head, 70, 6);
    cout << endl;
    printll(head);

    // cout << head->data << " " << head->next->data << " ";
    return 0;
}