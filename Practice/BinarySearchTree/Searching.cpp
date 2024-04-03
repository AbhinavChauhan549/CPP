// Time Complexity for insertion is O(log(N))
// inorder of bst is always sorted
// coding ninjas

/*

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Recursive approach not suitable for skew bst
    // base cases hoge 2
    // if(root==NULL){
    //     return false;
    // }
    // if(root->data==x){
    //     return true;
    // }
    // if(root->data>x){
    //     return searchInBST(root->left, x);
    // }
    // else{
    //     return searchInBST(root->right, x);
    // }
}

 // Iterative approach
    BinaryTreeNode<int>* temp=root;

    while(temp!=NULL){
        if(temp->data==x){
            return true;
        }
        if(temp->data>x){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }

    }
    return false;
*/