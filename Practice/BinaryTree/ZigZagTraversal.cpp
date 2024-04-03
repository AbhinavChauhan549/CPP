// gfg
/*
 vector <int> zigZagTraversal(Node* root)
    {

      vector<int>result;

      // Base case
      if(root == NULL){
          return result;
      }

      queue<Node* >q;
      q.push(root);

      bool lefttoRight=true;

      while(!q.empty()){
          int size = q.size();
          vector<int>ans(size);
          // level process
          for(int i=0 ;i<size; i++){
              Node* frontNode = q.front();
              q.pop();

              int index = lefttoRight ? i : size-i-1;
              ans[index]=frontNode->data;

              if(frontNode->left){
                  q.push(frontNode->left);
              }
              if(frontNode->right){
                  q.push(frontNode->right);
              }
          }

          lefttoRight=!lefttoRight;
          for(auto i:ans){
              result.push_back(i);
          }
      }
      return result;
    }
*/