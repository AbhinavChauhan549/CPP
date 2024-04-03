#include<iostream>
using namespace std;

class node {

public:
    int data;
    node *next;
    
    node(int data){
        this->data= data;
        this->next = NULL;
    }

    

};
void insertatbeg( node * &head , int d){

    // creating a new node
    node*  n2 = new node(d);
    
    n2->next= head;

    head =n2;
}

node* reverseLL(node *&head){
    node *prev= NULL;
    node *curr= head;
    node *forward= NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev= curr;
        curr= forward;
    }

    return prev;
}

void print(node* &head ){
    node * temp = head;

    while(temp!=0){
        cout<<temp->data<<" ";

        temp=temp->next;
    }
    cout<<endl;
}

int main(){
      node *n1 = new node(5);
    
    node* head= n1;
    
    node* n2 = new node(10);
    insertatbeg(head,10);
    
     insertatbeg(head,15);
   
    reverseLL(head);
    print(head);
     return 0;
}
