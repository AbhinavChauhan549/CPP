// GFG
/*
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        return Solve(pre, in, 0, n-1, 0, n-1);
    }

    Node* Solve(int pre[], int in[], int preStart, int preEnd, int inStart, int inEnd)
    {
        if(preStart>preEnd || inStart>inEnd) return NULL;
        Node* root = new Node(pre[preStart]);
        int mid = get_pos(in, inStart, inEnd, root->data);
        int leftTreeCnt = mid - inStart;
        root->left = Solve(pre, in, preStart+1, preStart+leftTreeCnt, inStart, mid-1);
        root->right = Solve(pre, in, preStart+leftTreeCnt+1, preEnd, mid+1, inEnd);
        return root;
    }

    int get_pos(int arr[], int start, int end, int val)
    {
        for(int i=start; i<=end; i++)
        {
            if(arr[i]==val) return i;
        }
        return -1;
    }
*/
