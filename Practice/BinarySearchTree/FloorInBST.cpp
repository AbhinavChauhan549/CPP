// coding ninjas

/*

int Floor(BinaryTreeNode<int> *node, int input)
{
    /*Write your code here.
   *Don't write main().
   *Don't take input, it is passed as function argument.
   *Don't print output.
   *Taking input and printing output is handled automatically.
  */

/*

  // base case
  if(node==NULL){
      return -1;

  }

  int floor = -1;

  while (node!=NULL) {

       if(node->data==input){
      floor=node->data;
      return floor;
  }

      if (node->data > input)
  {
      node=node->left;
  }

  else{
     floor=node->data;
      node=node->right;
  }
  }
  return floor;
}
*/