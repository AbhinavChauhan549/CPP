#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    
    node(int data){
        this->data= data;
        this->next = NULL;
    }

    ~node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next;

        }
        cout<<"Memory Free ho gayi  "<< value<<endl;
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

void del(int position , node* &head){
    if(position==1){
        // pehli node delete karni hai
        node* temp = head;
        head= head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        // koi or node delete karni hai
        node* curr=head;
        node* prev = NULL;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    node *n1 = new node(5);
    
    node* head= n1;
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


    // del(5,head);
    print(head);
     return 0;
}