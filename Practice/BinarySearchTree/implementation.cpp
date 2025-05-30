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