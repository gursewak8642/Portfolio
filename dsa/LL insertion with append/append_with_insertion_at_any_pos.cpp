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
        this->next = NULL;
    }
};

void Append(Node *head, int data)
{
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    Node *new_node = new Node(data);
    current->next = new_node;
};

void display(Node *head)
{
    if (head == NULL)
    {

        cout << "List is empty " << endl;
        return;
    }
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
};

void insertAtHead(Node *&head, int a)
{
    Node *temp = new Node(a);
    temp->next = head;
    head = temp;
};
void insertAttail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
};
void insertAtPosition(Node *&tail, Node *&head, int pos, int d)
{
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAttail(tail, d);
        return;
    }
    Node *nodetoInsert = new Node(d);
    nodetoInsert->next = temp->next;
    temp->next = nodetoInsert;
};
int main()
{
    Node *head = new Node(2);
    Node *node1 = new Node(3);
    Node *node2 = new Node(4);
    Node *tail = node2;

    head->next = node1;
    node1->next = node2;

    int data;
    cout << "Linked List";
    display(head);
    cout << endl
         << "Enter the new Node (data) append : ";
    cin >> data;
    Append(head, data);
    display(head);
    cout<<"Append data ";
    cin >> data;
    Append(head, data);
    display(head);
    int a;
    cout << endl
         << "Enter the value that you have to insert in front of the linked list: ";
    cin >> a;
    insertAtHead(head, a);
    display(head);

    cout<<endl<<"Insertion at tail ";
    insertAttail(tail, 12);
    display(head);

    cout<<endl<<"Insert at a position ";
    insertAtPosition(tail,head,4,22);
    display(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data;

    return 0;
}
