// coding ninjas

/*

int solve(TreeNode<int> *root, int &count , int k ){

    // base case
    if(root==NULL){
        return -1;
    }

    int left = solve(root->left,count,k);
    if(left!=-1){
        return left;
    }
    count++;
    if(count==k){
        return root->data;
    }
    return solve(root->right,count,k);
}
int kthSmallest(TreeNode<int> *root, int k)
{

    int count=0;
    int ans = solve(root, count,k);
    return ans;
}

isme hum inorder traversal ka use karege or isse optimize karege morris traversal se

*/