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

TreeNode<int>* inorderToBST(int s , int e , vector<int>&inorderval){
    // base case
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;

    TreeNode<int>* temp = new TreeNode<int>(inorderval[mid]);

    temp->left= inorderToBST(s, mid-1, inorderval);
    temp->right= inorderToBST( mid+1,e, inorderval);

    return temp;

}

TreeNode<int>* balancedBst(TreeNode<int>* root) {


     vector<int>inorderval;
    inorder(root,inorderval);
    int n = inorderval.size()-1;

    return inorderToBST(0, n, inorderval);
}

*/