// GFG
/*
class Solution
{   private:

    pair<bool,int> isSumTreeFast(Node* root){
        // Base Case
        if(root==NULL){
            pair<bool,int>p = make_pair(true,0);
            return p;
        }
        if(root->left==NULL && root->right==NULL){
            pair<bool,int>p = make_pair(true,root->data);
            return p;
        }

        pair<bool,int> leftans = isSumTreeFast(root->left);
        pair<bool,int> rightans = isSumTreeFast(root->right);

        bool left=leftans.first;
        bool right = rightans.first;

        bool condition = root->data == leftans.second+rightans.second;

        pair<bool,int> ans;
        if(left && right && condition ){
            ans.first=true;
            ans.second=2*root->data;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
    public:
    bool isSumTree(Node* root)
    {
        return isSumTreeFast(root).first;
    }
};
*/