#include<iostream>
using namespace std;

class node{
    public :
        int data;
        node* next;

        node(int d ){
            this->data= d;
            this->next=NULL;
        }
};

void print(node* &head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<< endl;
}

void insertatTail(node* &tail, int d){
    node * temp = new node(d);
    tail->next= temp;
     tail = temp;
   
}
int main(){
    
    node *n1 = new node(2);
    node *head= n1;
    node* tail = n1;
    print(head);

    insertatTail(tail,5);
    print(head);
    insertatTail(tail,7);
    print(head);
     return 0;
}