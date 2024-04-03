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
// Floyd Loop Detection Algorithm for detection of loop in Linked List
bool detectloop(node* &head){

    if(head==NULL){
        return false;
    }
    node* slow=head;
    node* fast=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast= fast->next;
        }
        slow= slow->next;
    
        if(fast==slow){
            cout<<"Loop is present at node "<<slow->data<<endl;
            return true ;
        }
        
    }
    return false;
}

// Using Map for detection of loop in Linked List 

/*

#include<map>


map<node*,bool>visited;

node* temp=head;
while(temp !=NULL){

    if(visited[temp]==true){
        return true ;
    }
    visited[temp]=true;
    temp = temp->next;
}
    return false;
}

*/
int main(){
    
    node *n1 = new node(2);
    node *head= n1;
    node* tail = n1;
    print(head);

    insertatTail(tail,5);
    
    insertatTail(tail,7);
    
    insertatTail(tail,6);
    insertatTail(tail,8);
    insertatTail(tail,9);
    insertatTail(tail,1);
    insertatTail(tail,22);
    insertatTail(tail,3);
    tail->next=head->next;

    if(  detectloop(head)){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"No cycle is present"<<endl;
    }
     return 0;
}