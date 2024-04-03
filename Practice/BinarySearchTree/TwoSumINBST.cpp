// coding ninjas

/*

void inorder(BinaryTreeNode<int>* root, vector<int>&inorderval ){
    // base case
    if(root==NULL){
        return;
    }

    inorder(root->left,inorderval);
    inorderval.push_back(root->data);

    inorder(root->right,inorderval);
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {


    vector<int>inorderval;
    inorder(root,inorderval);

    int left=0;
    int right=inorderval.size()-1;

    while(left<right){

        if(inorderval[left]+inorderval[right]==target){
            return true;
        }
        else if(inorderval[left]+inorderval[right]<target){
            left++;
        }

                else {
            right--;
        }
    }
    return false;
}
*/