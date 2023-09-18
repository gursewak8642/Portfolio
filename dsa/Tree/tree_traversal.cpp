#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*left,*right;
    // struct Node*right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;  
    }

};

//Function to print post order traversal
void printpostorder(struct Node*node){
    if(node==NULL){
        return;
    }
    printpostorder(node->left);
    printpostorder(node->right);
    cout<<node->data<<" ";
}

//Function to print inorder traversal
void printinorder(struct Node*node){
    if(node==NULL)
      return;
    printinorder(node->left);
    cout<<node->data<<" ";
    printinorder(node->right);
}


//Function to print preorder traversal
void printpreorder(struct Node*node){
    if(node==NULL)
      return;
    cout<<node->data<<" ";
    printpreorder(node->left);
    printpreorder(node->right);
}

int main(){
    struct Node*root=new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    cout<<"Pre order traversal of binary tree is  -> ";
    printpreorder(root);

    cout<<endl<<"In order traversal of binary tree is   -> ";
    printinorder(root);

    cout<<endl<<"Post order traversal of binary tree is -> ";
    printpostorder(root);

    return 0;
}