// gfg

// tc : O(h)
// sc : O(h)
/*

int countnode(struct Node* root){

   // base case
   if(root==NULL){
       return 0;
   }

   int ans = 1 + countnode(root->left) + countnode(root->right);

   return ans;
}

bool isCBT(struct Node* root , int index , int totalcount){
   // base case
   if(root==NULL){
       return true ;
   }
   if(index >= totalcount){
       return false;
   }
   else{
       bool left=isCBT(root->left,2*index+1,totalcount);
       bool right=isCBT(root->right, 2*index+2 , totalcount);


       return (left&&right);
   }

}

bool isMaxOrder(struct Node* root){
   // base case
   if(root->left==NULL && root->right==NULL){
       return true;
   }

   if(root->right==NULL){
       return (root->data > root->left->data);

       }


   else{
       bool left = isMaxOrder(root->left);
       bool right = isMaxOrder(root->right);

       return (left && right && (root->data >root->right->data) && (root->data > root->left->data));

   }
}

   bool isHeap(struct Node* tree) {

      int index=0;
      int totalcount = countnode(tree);

      if(isCBT(tree,index,totalcount) && isMaxOrder(tree)){
          return true;
      }
      else{
          return false;
      }
   }
*/