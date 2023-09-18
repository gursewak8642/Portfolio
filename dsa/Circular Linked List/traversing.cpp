#include<bits/stdc++.h>
using namespace std;
class Node{
    public:int data;
    struct Node*next;
};
struct Node*addend(struct Node*last,int data){
    if(last==NULL){
        struct Node*temp=new Node;
        temp->data=data;
        last=temp;
        last->next=last;
        return last;
    }
    struct Node*temp= new Node;
    temp->data=data;
    temp->next=last->next;
    last->next = temp;
    last=temp;
    return last;

}
void traverse(struct Node*last){
    struct Node*p;
    if(last==NULL){
        cout<<"List is Empty "<<endl;
        return;
    }
    p=last->next;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=last->next);
}
int main(){
    struct Node*last=NULL;
    last = addend(last,6);
    last = addend(last,4);
    last = addend(last,2);
    last = addend(last,8);
    last = addend(last,12);
    last = addend(last,10);
    traverse(last);
    return 0;
}
