// coding ninjas

/*

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    int pred = -1; // Initializing predecessor to -1
   int succ = -1; // Initializing successor to -1
   TreeNode* temp = root; // Initializing a temporary pointer to root

   // Traversing the tree until either reaching the end or finding the key
   while(temp && temp->data != key) {
       if(temp->data > key) {
           // If current node's data is greater than key, update successor and move to the left subtree
           succ = temp->data;
           temp = temp->left;
       }
       else {
           // If current node's data is less than or equal to key, update predecessor and move to the right subtree
           pred = temp->data;
           temp = temp->right;
       }
   }

   // If key is found in the tree
   if(temp) {
       // Finding predecessor
       TreeNode* leftTree = temp->left;
       while(leftTree) {
           pred = leftTree->data;
           leftTree = leftTree->right;
       }
       // Finding successor
       TreeNode* rightTree = temp->right;
       while(rightTree) {
           succ = rightTree->data;
           rightTree = rightTree->left;
       }
   }

   // Return the pair containing predecessor and successor
   return {pred, succ};
}
*/