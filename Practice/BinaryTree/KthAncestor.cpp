// GFG
/*

Node* solve(Node* root, int &k , int node){
    // base case
    if(root==NULL){
        return NULL;
    }
    if(root->data==node){
        return root;
    }

    // left part
    Node *leftans= solve(root->left,k,node);

    // right part
    Node *rightans= solve(root->right,k,node);

    // waapis jane ki condition
    if(leftans!=NULL && rightans==NULL){
        k--;
        if(k==0){
            // ye k ki value lock karne ke liye hai kyuki hame ans mil chuka hai isse hum loop rok dege
            k=INT_MAX;
            return root;
        }
        return leftans;
    }

    if(rightans!=NULL && leftans==NULL){
          k--;
        if(k==0){
            // ye k ki value lock karne ke liye hai kyuki hame ans mil chuka hai isse hum loop rok dege
            k=INT_MAX;
            return root;
        }
        return rightans;
    }
    return NULL;

}
int kthAncestor(Node *root, int k, int node)
{
    Node *ans = solve(root,k,node);

    if(ans==NULL || ans->data==node){
        return -1;
    }
    else{
        return ans->data;
    }
}

*/