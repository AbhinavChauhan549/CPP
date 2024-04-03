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
    print(head);
    node* n2 = new node(10);
    insertatbeg(head,10);
    print(head);
     insertatbeg(head,15);
    print(head);
     return 0;
}