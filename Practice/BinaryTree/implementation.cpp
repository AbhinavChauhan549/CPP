#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
  int data;
  node *left;
  node *right;

  node(int d)
  {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};
node *buildNode(node *root)
{

  cout << "Enter data : " << endl;
  int data;
  cin >> data;

  root = new node(data);

  if (data == -1)
  {
    return NULL;
  }

  cout << "Enter data for left child of tree : " << endl;
  root->left = buildNode(root->left);
  cout << "Enter data for right child of tree : " << endl;
  root->right = buildNode(root->right);

  return root;
}

void levelOrderTraversal(node *root)
{
  queue<node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {

    node *temp = q.front();
    cout << temp->data << " ";
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

// Inorder Traversal
// LNR
void inorder(node *root)
{

  // base case
  if (root == NULL)
  {
    return;
  }

  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

// Preorder Traversal
// NLR

void preorder(node *root)
{

  // base case
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  preorder(root->left);

  preorder(root->right);
}

// Postorder Traversal
// LRN
void postorder(node *root)
{

  // base case
  if (root == NULL)
  {
    return;
  }

  postorder(root->left);

  postorder(root->right);
  cout << root->data << " ";
}

void buildLevelOrder(node *&root)
{
  queue<node *> q;
  cout << "Enter data for root : ";
  int data;
  cin >> data;
  root = new node(data);
  q.push(root);

  while (!q.empty())
  {
    node *temp = q.front();
    q.pop();

    cout << "Enter left node for : " << temp->data << endl;
    int leftData;
    cin >> leftData;

    if (leftData != -1)
    {
      temp->left = new node(leftData);
      q.push(temp->left);
    }

    cout << "Enter Right node for : " << temp->data << endl;
    int rightData;
    cin >> rightData;

    if (rightData != -1)
    {
      temp->right = new node(rightData);
      q.push(temp->right);
    }
  }
}
int main()
{
  node *root = NULL;
  buildLevelOrder(root);
  levelOrderTraversal(root);

  // // CREATING A TREE
  // root = buildNode(root);

  // // level order traversal of tree
  // //

  // levelOrderTraversal(root);
  // cout << endl;
  // cout << endl;
  // inorder(root);
  // cout << endl;
  // cout << endl;
  // preorder(root);
  // cout << endl;
  // cout << endl;
  // postorder(root);
  // return 0;
}