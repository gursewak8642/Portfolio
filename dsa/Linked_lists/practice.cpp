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
//         next = NULL;
//     }
// };
// void printll(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// };
// int main()
// {
//     Node n1(1);
//     Node *head = &n1;

//     Node n2(2);
//     Node n3(3);
//     Node n4(4);
//     Node n5(5);

//     n1.next = &n2;
//     n2.next = &n3;
//     n3.next = &n4;
//     n4.next = &n5;

//     printll(head);

//     // cout << head->data << " " << head->next->data << " ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int value;
//     Node *next;
// };
// int main()
// {
//     Node *head;
//     Node *one = NULL;
//     Node *two = NULL;
//     Node *three = NULL;

//     one = new Node();
//     two = new Node();
//     three = new Node();

//     one->value = 1;
//     two->value = 2;
//     three->value = 3;

//     one->next = two;
//     two->next = three;
//     three->next = NULL;

//     head = one;
//     while (head != NULL)
//     {
//         cout << head->value << " ";
//         head = head->next;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class Node{
    public: int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
int main(){
    Node*node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
}
