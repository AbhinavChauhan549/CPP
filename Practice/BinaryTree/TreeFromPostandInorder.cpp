// GFG
/*
int postIndex;
Node *Solve(int *in,int *post,int is,int ie)
{
    if(is>ie)
    return NULL;

    Node *root=new Node(post[postIndex--]);
    int index;
    for(int i=is;i<=ie;i++){
        if(in[i]==root->data){
            index=i;
            break;
         }
    }


          root->right=Solve(in,post,index+1,ie);
          root->left=Solve(in,post,is,index-1);
 return root;
}

Node *buildTree(int in[], int post[], int n) {
    // Your code here
    postIndex=n-1;
    return Solve(in,post,0,n-1);
}
*/