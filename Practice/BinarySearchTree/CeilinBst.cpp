// coding ninjas

/*

int findCeil(BinaryTreeNode<int> *node, int x){
    // base case
    if(node==NULL){
        return -1;

    }

    int ceil = -1;

    while (node!=NULL) {

         if(node->data==x){
        ceil=node->data;
        return ceil;
    }

        if (node->data < x)
    {
        node=node->right;
    }

    else{
        ceil=node->data;
        node=node->left;
    }
    }
    return ceil;
}
*/