// coding ninjas

/*

TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    // base case
    if(root==NULL){
        return NULL;
    }

if(root->data < P->data && root->data < Q->data){
    return  LCAinaBST(root->right,P, Q);
}

if(root->data > P->data && root->data > Q->data){
    return  LCAinaBST(root->left,P, Q);
}

// else root hi mera lca hoga

return root;

}


//===================iterative approach================================

while(root!=NULL){

if(root->data < P->data && root->data < Q->data){
    root=root->right;

}

else if(root->data > P->data && root->data > Q->data){
    root=root->left;
}

else{
    return root;
}

}
*/