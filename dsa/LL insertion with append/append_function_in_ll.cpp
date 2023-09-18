#include <bits/stdc++.h>
using namespace std;
class Node{
    public: int data;
    Node*next;
    Node(int data){
        this->data= data;
        this->next= NULL;
    }
};
class Singlelinkedlist
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
            /* code */ current = current->next;  
        }
        Node *new_node = new Node(data);
        current->next = new_node;
    }
    void Display(Node *head)
    {

        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }

}; 
int main()
{
    Node *head = new Node(2);
    Node *node_3 = new Node(3);
    Node *node_5 = new Node(5);
    Node *node_7 = new Node(7);
    Node *node_13 = new Node(13);

    head->next = node_3;
    node_3->next = node_5;
    node_5->next = node_7;
    node_7->next = node_13;

    Singlelinkedlist s;
    int data, after, opt = 0;
    cout << "Linked List";
    s.Display(head);
    cout << "\nEnter new Node (data) : ";
    cin >> data;
    s.Append(head, data);
    s.Display(head);

    return 0;
}