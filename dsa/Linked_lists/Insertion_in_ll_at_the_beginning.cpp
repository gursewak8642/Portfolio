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

// // this function insert the value before the head;
// void insertAtHead(Node * &head, int d)
// {
//     Node *temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }

// // Prints the complete Node
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {

//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;
//     Node *tail = node1;
//     print(head);
//     cout << endl;
//     insertAtHead(head, 12);
//     print(head);
//     cout << endl;
//     insertAtHead(head, 15);
//     print(head);
//     return 0;
// }