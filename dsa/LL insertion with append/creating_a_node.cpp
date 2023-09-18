#include <bits/stdc++.h>
using namespace std;

// Method one which uses alot of memory and is not stable cause we are making alot of pointers in this...
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// int main()
// {
//     struct Node *head = NULL;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     head->data = 45;
//     head->next = NULL;

//     struct Node *second = (struct Node *)malloc(sizeof(struct Node));
//     second->data = 55;
//     second->next = NULL;

//     struct Node *third = (struct Node *)malloc(sizeof(struct Node));
//     third->data = 65;
//     third->next = NULL;

//     head->next = second;
//     second->next = third;

//     cout << head->data << endl;
//     return 0;
// }

// Method two
struct node
{
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        cout << "Linked list is empty " << endl;
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << count << endl;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 100;
    current->link = NULL;
    head->link->link = current;

    count_of_nodes(head);

    return 0;
}
