// // { Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *next;

//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };

// // function to display the linked list
// void display(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// Node *insertInMiddle(Node *head, int x);

// int main()
// {
//     int T, n, x;
//     cin >> T;
//     while (T--)
//     {
//         cin >> n >> x;

//         struct Node *head = new Node(x);
//         struct Node *tail = head;

//         for (int i = 0; i < n - 1; i++)
//         {
//             cin >> x;
//             tail->next = new Node(x);
//             tail = tail->next;
//         }

//         cin >> x;
//         head = insertInMiddle(head, x);
//         display(head);
//     }
//     return 0;
// }
// // } Driver Code Ends

// /*
// struct Node {
//   int data;
//   struct Node *next;
//   Node(int x) {
//     data = x;
//     next = NULL;
//   }
// };
// */

// // Function to insert a node in the middle of the linked list.
// Node *insertInMiddle(Node *head, int x)
// {
//     Node *temp = new Node(x);
//     if (head == NULL)
//         return temp;
//     Node *curr = head;
//     int count = 0;
//     while (curr != NULL)
//     {
//         count = count + 1;
//         curr = curr->next;
//     }
//     for (int i = 0; i < count / 2; i++)
//     {
//         curr = curr->next;
//     }
//     temp->next=curr->next;
//     curr->next1
//     =temp;
//     return head;
// }
// { Driver Code Starts
// Initial Template for C++

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

void displayList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// } Driver Code Ends
// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/
// Complete this function
void insertAtPosition(Node *head, int pos, int data)
{
    // Your code here Node*curr=head;
    Node *n = new Node(data);
    Node *curr = head;
    if (pos == 1)
    {
        n->next = curr->next;
        curr = n->next;
    }
    int count = 1;
    while (count < pos - 1)
    {
        curr = curr->next;
        count++;
    }
    if (curr->next == NULL)
    {
        curr->next = n;
    }
    n->next = curr->next;
    curr->next = n;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        int pos;
        cin >> pos;
        int d;
        cin >> d;
        insertAtPosition(head, pos, d);
        displayList(head);
        cout << endl;
    }
    return 0;
} // } Driver Code Ends