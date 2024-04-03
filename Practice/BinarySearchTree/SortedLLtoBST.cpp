

// int countnodes(TreeNode *head){
//     int count=0;
//     TreeNode *temp=head;

//     while(temp!=NULL){
//         count++;
//         temp=temp->right;
//     }
//     return count;
// }
// TreeNode sortedLLtoBST(TreeNode *head,int n){
//     // basecase
//     if(n<=0|| head==NULL )
//     {
//         return NULL;
//     }
//     TreeNode *leftpart = sortedLLtoBST(head,n/2);

//     TreeNode * root= head;
//     root->left=left;

//     head=head->next;

//     root->right=sortedLLtoBST(head,n-n/2-1);

//     return root;
//     }