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

void MiddleInsert(node* &head , int position, int d){
    node* temp = head;
    int count=1;
    while(count < position-1){
        temp=temp->next;
        count++;
    }

    node* nodetoInsert = new node(d);
    nodetoInsert->next= temp->next;
    temp->next=nodetoInsert;
}

int main(){
      node *n1 = new node(5);
    
    node* head= n1;
    // print(head);
    node* n2 = new node(10);
    insertatbeg(head,10);
    // print(head);
     insertatbeg(head,15);
    // print(head);
    insertatbeg(head,25);
    insertatbeg(head,35);
    insertatbeg(head,65);
    insertatbeg(head,45);
    insertatbeg(head,55);
    print(head);
    MiddleInsert(head,4,95);
    print(head);
     return 0;
}