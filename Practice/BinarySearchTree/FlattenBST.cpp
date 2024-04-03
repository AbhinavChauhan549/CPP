// coding ninjas

/*

void inorder(TreeNode<int>* root, vector<int>&inorderval ){
    // base case
    if(root==NULL){
        return;
    }

    inorder(root->left,inorderval);
    inorderval.push_back(root->data);

    inorder(root->right,inorderval);
}


TreeNode<int>* flatten(TreeNode<int>* root)
{
     vector<int>inorderval;
    inorder(root,inorderval);
    int n = inorderval.size();

    TreeNode<int>* newRoot= new TreeNode(inorderval[0]);

    TreeNode<int>* curr=  newRoot;

     for (int i = 1; i < n; i++) {

        TreeNode<int> *temp = new TreeNode(inorderval[i]);

        curr->left=NULL;
        curr->right=temp;
        curr=temp;
     }

     curr->left=NULL;
     curr->right=NULL;

     return newRoot;
}
*/