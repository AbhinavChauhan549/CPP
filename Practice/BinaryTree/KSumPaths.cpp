// GFG
/*
 void solve(Node *root,int k , int &count , vector<int>path){
        if(root==NULL){
            return;
        }
        path.push_back(root->data);

        //left
        solve(root->left,k,count,path);

        // right
        solve(root->right,k,count,path);

        // check for K sum
        int s=path.size();
        int sum =0;

        for(int i =s-1 ; i>=0; i--){
            sum += path[i];

            if(sum==k ){
                count++;
            }
        }
        path.pop_back();
    }



    int sumK(Node *root,int k)
    {
        vector<int>path ;
        int count=0;

        solve(root,k,count,path);

        return count;
    }
*/