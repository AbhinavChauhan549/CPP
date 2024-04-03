// coding ninjas

/*

vector<int> largestBSTBT(TreeNode* root)

{

    // Base cases : When tree is empty or it has one child.

    if (root == NULL)

        return {INT_MAX, INT_MIN, 0};

    if (root->left == NULL && root->right == NULL)

        return {root->data, root->data, 1};

    // Recur for left subtree and right subtrees

    vector<int> left = largestBSTBT(root->left);

    vector<int> right = largestBSTBT(root->right);

    // Create a return variable and initialize its size.

    vector<int> ans(3, 0);

    // If whole tree rooted under current root is BST.

    if ((left[1] < root->data) && (right[0] > root->data))

    {

        ans[0] = min(left[0], min(right[0], root->data));

        ans[1] = max(right[1], max(left[1], root->data));

        // Update answer for tree rooted under current 'root'

        ans[2] = 1 + left[2] + right[2];

        return ans;

    }

    // If whole tree is not BST, return maximum of left and right subtrees

    ans[0] = INT_MIN;

    ans[1] = INT_MAX;

    ans[2] = max(left[2], right[2]);

    return ans;

}

int largestBST(TreeNode *root)

{

      return largestBSTBT(root)[2];

}
*/