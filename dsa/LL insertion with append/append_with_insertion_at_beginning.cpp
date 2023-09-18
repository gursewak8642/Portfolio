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
class SingleLinkedList
{
public:
    SingleLinkedList()
    {
    }

    void Append(Node *head, int data)
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        Node *new_node = new Node(data);
        current->next = new_node;
    }



    void display(Node *head)
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }



    void insertAtHead(Node *&head, int a)
    {
        Node *temp = new Node(a);
        temp->next = head;
        head = temp;
    }




};
int main()
{
    Node *head = new Node(2);
    Node *node1 = new Node(3);
    Node *node2 = new Node(4);


    head->next = node1;
    node1->next = node2;

    SingleLinkedList s;
    int data;
    cout<<"Linked List";
    s.display(head);
    cout<<endl<<"Enter the new Node (data) : ";
    cin>>data;
    s.Append(head,data);
    s.display(head);
    cin>>data;
    s.Append(head,data);
    s.display(head);
    int a;
    cout<<endl<<"Enter the value that you have to insert in front of the linked list: ";
    cin>>a;
    s.insertAtHead(head,a);
    s.display(head);
    return 0;

    // int data, after, opt = 0;
    // // cin >> data;
    // s.Append(head, 10);
    // // cin >> data;
    // s.Append(head, 20);
    // // cin >> data;
    // s.Append(head, 30);
    // s.display(head);
    // int a;
    // cin >> a;
    // s.insertAtHead(head, a);
    // s.display(head);
    // cin >> a;
    // s.insertAtHead(head, a);
    // s.display(head);
}
