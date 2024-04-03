// coding ninjas

/*
bool isbst(BinaryTreeNode<int>* root,int min , int max){
    // base case
    if(root==NULL){
        return true;
    }

    if(root->data>=min && root->data<=max){
        bool left = isbst(root->left,min,root->data);
        bool right = isbst(root->right,root->data, max);

        return left&&right ;
    }

    return false;
}
bool validateBST(BinaryTreeNode<int>* root)
{
    // Write your code here
   return isbst(root, INT_MIN,INT_MAX);
}

another approach ======================================================================
\

it can done by finding the inorder traversal  and checking whether the inorder traversal is sorted or not
*/