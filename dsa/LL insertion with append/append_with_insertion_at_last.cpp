#include<bits/stdc++.h>
using namespace std;
class Node{
    public:int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class SingleLinkedList{
    public: SingleLinkedList()
    {

    }
    void display(Node*head){
        Node*current=head;
        while(current!=NULL){
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<endl;
    }
    void Append(Node*head,int data){
        Node*current=head;
        while(current->next!=NULL){
            current=current->next;
        }
        Node*temp= new Node(data);
        current->next=temp;
    }
    // void insertatend(head,tail,data){

    // }
};
int main(){
    Node*head= new Node(10);
    Node*node1= new Node(20);

    head->next=node1;
    int data;
    SingleLinkedList s;
    s.display(head);
    cout<<"enter the append data: ";
    cin>>data;
    s.Append(head,data);
    s.display(head);


}