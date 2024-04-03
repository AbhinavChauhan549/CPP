// GFG
/*
 void tl(Node* root,vector<int>&ans){
     if((root==NULL)||(root->left==NULL&&root->right==NULL)){
           return ;
       }
       ans.push_back(root->data);
       if(root->left){
           tl(root->left,ans);
       }else{
           tl(root->right,ans);
       }

}
void tleaf(Node* root,vector<int>&ans){
    if((root==NULL)){
           return ;
       }
       if(root->left==NULL  && root->right==NULL){
           ans.push_back(root->data);
           return;
       }
       tleaf(root->left,ans);
       tleaf(root->right,ans);
}
void tr(Node* root,vector<int>&ans){
      if((root==NULL)||(root->left==NULL &&root->right==NULL)){
           return ;
       }
       if(root->right){
           tr(root->right,ans);
       }else{
           tr(root->left,ans);
       }
       ans.push_back(root->data);

}
    vector <int> boundary(Node *root)
    {
       vector<int>ans;
       if(root==NULL){
           return ans;
       }
       ans.push_back(root->data);
       tl(root->left,ans);
       tleaf(root->left,ans);
       tleaf(root->right,ans);
       tr(root->right,ans);
    }
*/