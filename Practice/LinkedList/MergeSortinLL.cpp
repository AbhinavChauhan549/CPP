

    #include<iostream>
    using namespace std;
    
    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    


node* middlenode(node* &head){

      
    node*slow=head;
    node*fast = head->next;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;  
    }
    return slow;
}
node* mergenode(node* left,node* right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    node* ans=new node(-1);
    node* temp=ans;
    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
        temp->next=left;
        temp=left;
        left=left->next;      
        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;   
        }
    }
    while(left!=NULL){
         temp->next=left;
         temp=left;
         left=left->next;
            
           
    }
    while( right!=NULL){
         temp->next=right;
         temp=right;
         right=right->next;   
    }
    ans= ans->next;
    return ans;
}

node* mergeSort(node *head) {
    // Write your code here.
      if(head!=NULL || head->next!=NULL){
        return head;
    }
    // Dividing LL into two parts 
   node* midnode= middlenode(head);
   node* left=head;
   node* right=midnode->next;
   midnode->next=NULL;

    // Recursively sorting the both left and right part of LL 

    left=mergeSort(left);
    right=mergeSort(right);

    // Now merging the nodes together after sorting 

    node* ans= mergenode(left,right);
    // ans= reverse(ans);
    return ans;
}
int main(){

    return 0;
}
