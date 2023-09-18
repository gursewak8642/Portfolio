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
print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
struct Node *del_last(struct Node *head)
{
    if (head == NULL)
    {
        cout << "List is already empty " << endl;
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct Node *temp = head;
        struct Node *temp2 = head;
        while (temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next;
        } 
        temp2->next = NULL;
        delete(temp);
        
    }
    return head;
};
int main()
{
    Node *head = new Node(10);
    Node *node1 = new Node(20);
    Node *node2 = new Node(30);

    head->next = node1;
    node1->next = node2;
    node2->next=NULL;

    print(head);
    head=del_last(head);
    print(head);
    return 0;
}