#include<iostream>
using namespace std;

class node
{
public:
int data; 
node *next;

node(int data){

    this->data=data;
    this->next=NULL;
}

~node(){
    int value = this->data;
    while(this->next!=0){
        delete next;
        this->next;

    }
}



};

void insertBeg(node *&head , int data){
    node *temp = new node(data);
    temp->next= head;
    head=temp;
}

void insertEnd(node *&tail, int data ){
    node *n3 = new node(data);
    tail->next=n3;
    n3->next=NULL;

    tail=n3;
}

void insertMid(node *&head,int data,int position){
    // if(position==1){
    //     insertBeg(head,data);
    //     return ;
    // }
node *m = head;
    int count = 1;
    while(count<position-1){
        m= m->next;
        count++;
    }
node *temp = new node (data);
temp->next= m->next;
m->next=temp;

}
void print(node *&head){
    node *m = head;

    while(m!=0){
        cout<< m->data<<" ";
        m=m->next;
    }
    cout<<endl;
}

void deletion(node *&head, int position){
    if(position==1){
        node *temp = head;
        head=head->next;
        temp->next=NULL;

        delete temp;

    }

    node *curr = head;
    node *prev= NULL;
    int count= 1 ;
    while(count < position){
        prev=curr;
        curr= curr->next;
        count++;

    }
    prev->next= curr->next;
    curr->next= NULL;
    delete curr;
}
int main (){
    node *n1= new node(5);
    cout<<n1->data<<endl;
    // cout<<n1->next<<endl;
    node *head = n1;
    node *tail=n1;
//-------------------------------------------------------------------------------------------------------------------------
    // Insertion at the beggining 

// insertBeg(head,5);
// insertBeg(head,3);

// insertBeg(head,6);

// insertBeg(head,7);

// insertBeg(head,8);

//-------------------------------------------------------------------------------------------------------------------------------
// Insertion at the End

// insertEnd(tail,2);
// insertEnd(tail,3);
// insertEnd(tail,4);
// insertEnd(tail,6);
// insertEnd(tail,7);
// insertEnd(tail,8);

// print(head);

// cout<<"Tail: "<<tail->data<<endl;
// cout<<"Head : "<<head->data<<endl;
//---------------------------------------------------------------------------------------------------------------------------
// Insertion at middle

// insertBeg(head,6);

// insertBeg(head,7);

// insertBeg(head,8);
// insertMid(head,22,2);
// insertMid(head,33,3);

// Examples 
// insertMid(head,44,4);
// insertMid(head,66,6);
// insertMid(head,77,7);
// insertMid(head,88,8);
// insertMid(head,99,9);
//------------------------------------------------------------------------------------------------------------------------------

//  Deletion in Linked List



insertBeg(head,5);
insertBeg(head,3);

insertBeg(head,6);

insertBeg(head,7);

insertBeg(head,8);

print(head);

deletion(head,2);
print(head);
     return 0;
}