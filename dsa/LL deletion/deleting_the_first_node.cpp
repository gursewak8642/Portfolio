// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node *delete_first(Node*&head))
//  {
//     if (head == NULL)
//     {
//         cout << "List is already empty! ";
//     }
//     else
//     {
//         Node *temp = head;
//         head = head->next;
//         free(temp);
//         temp = NULL;
//     }
// };
// int main(){
//     Node*head=new Node(10);
//     Node*node1 = new Node(20);
//     Node*node2 = new Node(30);

//     head->next= node1;
//     node1->next=node2;

//     head = delete_first(head);
//     Node*ptr= head;
//     // prt = head;
//     while (ptr!=NULL){
//         cout<<ptr->data<<" ";
//         ptr=ptr->next;
//     }
//     return 0;

// }
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
void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
Node *delHead(Node *head)
{
    if (head == NULL)
        return NULL;
    else
    {
        Node *temp = head->next;
        delete (head);
        return temp;
    }
}
int main()
{
    Node*head=new Node(10);
    head->next= new Node(20);
    head->next->next=new Node(30);
    printlist(head);
    head=delHead(head);
    printlist(head);
    return 0;
}