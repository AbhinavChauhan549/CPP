/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
int data; 
Node *next;

Node(int data){

    this->data=data;
    this->next=NULL;
}

~Node(){
    int value = this->data;
    while(this->next!=0){
        delete next;
        this->next;

    }
}
};

int lenth(Node* head){
    int l=0;
    Node* temp = head ;
    while(temp!=NULL){
        temp= temp->next;
        l++;
    }
    return l;
}
Node* kReverse(Node* head, int k) {
    // Write your code here.
    if(head==NULL){
        return NULL;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;
    int count = 0;
    int len=lenth(head);

    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(curr!=NULL &&len % count == 0 )
       {
          head->next = kReverse(next, k);
        }
        else if(curr!=NULL){
            head->next=next;
        
    }
    return prev;
}

int main(){
    
    Node *n1 = new Node(5);
    cout<<n1->data;
    cout<<n1->next;
     return 0;
}