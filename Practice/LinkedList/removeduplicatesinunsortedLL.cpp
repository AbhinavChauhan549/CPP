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

      ~node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next;

        }}
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
        
            node* temp = curr;
            while(temp->next!=NULL){
                if( curr->data==temp->next->data){
                    // node* nodetojoin=temp->next;
                    node* nodetodelete=temp->next;
                    temp->next=nodetodelete->next;
                    delete(nodetodelete);
                    
                    // temp=temp->next;                    
                }
                else{
                    temp=temp->next;
                }
                // temp=temp->next;
            }
            curr=curr->next;  
        
    }
}
int main(){
    node* first=new node(8);
    node* head=first;
    node* tail=first;

    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,5);
    insertAtHead(head,5);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,7);
    print(head);
    cout<<"\n After removal of duplicate nodes final Linked List : "<<endl;
    removeduplicates(head);
    print(head);
     return 0;
}