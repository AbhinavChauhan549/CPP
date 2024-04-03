// sc : O(h)
// tc: O(N)
/*

void convertBSTtosortedDLL(TreeNode *root, TreeNode *head){
  if (root == NULL) {
    return NULL;
  }
  convertBSTtosortedDLL(root->right, head);

  root->right=head;
  if (head != NULL) {
    head->left = root;
  }
  head=root;

  convertBSTtosortedDLL(root->left, head);
}

*/
