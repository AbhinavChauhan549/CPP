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
int main(){
    
    node *n1 = new node(5);
    cout<<n1->data;
    cout<<n1->next;
     return 0;
}