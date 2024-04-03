#include<iostream>
using namespace std;

//===========================================================================================================

// First approach to check LL is palindrome or not 
// First approach is by using array or vector but it is not optimal because its space complexity is O(n)

  //Function to check whether the list is palindrome.
    // bool isPalindrome(Node *head)
    // {
    //     vector<int> ans;
        
    //     Node* temp=head;
    //     while(temp!=NULL){
    //         ans.push_back(temp->data);
    //         temp=temp->next;
    //     }
    //     int n = ans.size();
    //     int s=0 ;
    //     int e=n-1;
        
    //     while(s<=e){
    //         if(ans[s]!=ans[e]){
    //             return false;
    //         }
    //         s++;
    //         e--;
    //     }
        
    //         return true;
    // }

    //========================================================================================================================

    // Second approach is better because its space complexity is O(1)


    //======================================================================================================================

    /*
     
    Node* getmedium(Node* &head){
             Node* slow=head;
             Node* fast=head;
       
       while(fast!=NULL &&fast->next!=NULL){
          
             fast=fast->next->next;
           slow=slow->next;
        
       }
       return slow;
    }
    
    Node* reverse(Node  *head){
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
     bool isPalindrome(Node *head)
    {
       if(head->next==NULL){
           return true;
       }
       
        Node* midnode=getmedium(head);
        
        
        Node* temp=midnode->next;
        midnode->next=reverse(temp);
        
        Node* head1=head;
        Node* head2=midnode->next;
        
        while(head2!=NULL){
            if(head1->data!=head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        
        //  temp=midnode->next;
        // midnode->next=reverse(temp);
        
        return true;
    }
    
    */
   //==============================================================================================================================================
int main(){
    
     return 0;
}