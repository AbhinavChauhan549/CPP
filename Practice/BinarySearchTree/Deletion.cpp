// deletion in bst has 4 cases
// case 1 , delete node has 0 child then we would simply return NULL to its parent node
// case 2 , delete node has 1 child then we would simply delete the delete node and return its childnode to its parentnode
// case 3 , delete node has 2 childs then we replace the delete node with maximum value from its left subtree or minimum value from its right subtree

// Time complexity for deletion is O(N)
#include <iostream>
#include <queue>
using namespace std;
// inorder of bst is always sorted
class Node
{

public:
  int data;
  Node *left;
  Node *right;

  Node(int d)
  {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};
Node *insertInBst(Node *&root, int data)
{
  // Base case
  if (root == NULL)
  {
    root = new Node(data);
    return root;
  }
  if (data > root->data)
  {
    // right part me insert karege
    root->right = insertInBst(root->right, data);
  }
  else
  {
    // left part me insert karege
    root->left = insertInBst(root->left, data);
  }
  return root;
}
void takeInput(Node *&root)
{

  int data;
  cin >> data;

  while (data != -1)
  {
    insertInBst(root, data);
    cin >> data;
  }
}

void levelOrderTraversal(Node *root)
{
  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {

    Node *temp = q.front();

    q.pop();

    if (temp == NULL)
    {
      cout << endl;
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      cout << temp->data << " ";
      if (temp->left)
      {
        q.push(temp->left);
      }
      if (temp->right)
      {
        q.push(temp->right);
      }
    }
  }
}
// function to find the minimum value in bst

Node *minVal(Node *&root)
{
  Node *temp = root;

  while (temp->left != NULL)
  {
    temp = temp->left;
  }
  return temp;
}
Node *maxVal(Node *&root)
{
  Node *temp = root;

  while (temp->right != NULL)
  {
    temp = temp->right;
  }
  return temp;
}

Node *deleteFromBST(Node *root, int x)
{
  // base case
  if (root == NULL)
  {
    return root;
  }
  if (root->data == x)
  {

    // if it has 0 child
    if (root->left == NULL && root->right == NULL)
    {
      delete root;
      return NULL;
    }

    // if it has 1 child
    // left child
    if (root->left != NULL && root->right == NULL)
    {
      Node *temp = root->left;
      delete root;
      return temp;
    }
    // right child
    if (root->left == NULL && root->right != NULL)
    {
      Node *temp = root->right;
      delete root;
      return temp;
    }

    // if it has 2 child
    if (root->left != NULL && root->right != NULL)
    {

      int mini = minVal(root->right)->data;
      root->data = mini;
      root->right = deleteFromBST(root->right, mini);
      return root;
    }
  }
  else if (root->data > x)
  {
    root->left = deleteFromBST(root->left, x);
    return root;
  }
  else
  {
    root->right = deleteFromBST(root->right, x);
    return root;
  }
}
int main()
{

  Node *root = NULL;

  cout << "Enter data to create BST: ";

  takeInput(root);
  cout << "Printing the BST: " << endl;
  levelOrderTraversal(root);
  // inorder , preorder and postorder bhi way me kar sakte hai jaise binary tree me karte hai

  cout << "Minimum value in bst is " << minVal(root)->data << endl;
  cout << "Maximum value in bst is " << maxVal(root)->data << endl;
  return 0;
}

/*
coding ninjas

BinaryTreeNode<int>* findMin(BinaryTreeNode<int>* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int key) {
 // base case
     if (root == NULL)
        return root;

    // Search for the node to be deleted
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node with only one child or no child
        if (root->left == NULL) {
            BinaryTreeNode<int>* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            BinaryTreeNode<int>* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        BinaryTreeNode<int>* temp = findMin(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
void inorderTraversal(BinaryTreeNode<int>* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        std::cout << root->data << " ";
        inorderTraversal(root->right);
    }
}*/