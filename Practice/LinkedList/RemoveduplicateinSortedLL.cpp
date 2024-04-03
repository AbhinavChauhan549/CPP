#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;


    node(int data){
        this->data=data;
        this->next=NULL;
    }
};


void insertAtHead(node* &head , int data){
    node* temp= new node(data);
    temp->next=head;
    head=temp;
}

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void removeduplicates(node* &head){
    node* curr=head;
    while(curr!=NULL){
        
            if((curr->next!=NULL)&& curr->data == curr->next->data){
                node* nodetojoin=curr->next->next;
                node* nodetodelete= curr->next;
                delete(nodetodelete);
                curr->next=nodetojoin;
            }
            else{
                curr=curr->next;
            }
        
    }
}
int main(){
    node* first=new node(2);
    node* head=first;
    node* tail=first;

    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    print(head);
    cout<<"\n After removal of duplicate nodes final Linked List : "<<endl;
    removeduplicates(head);
    print(head);
     return 0;
}