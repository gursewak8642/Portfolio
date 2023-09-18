#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
 Node *del_first(Node *head)
{ 
    if (head == NULL)
    {
        cout << "List is  already empty" << endl;
    }
    else
    {
         Node *temp = head;
        head = head->next;
        free(temp);
    } cout<<head->data<<endl;
    return head;
};

int main()
{
    Node *head = new Node(10);
    Node *node1 = new Node(20);
    Node *node2 = new Node(30);

    head->next = node1;
    node1->next = node2;
    // Node* temp=head;
    // head=head->next;
    head = del_first(head);
    //  ptr=head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}