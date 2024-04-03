// GFG
/*
vector<int> verticalOrder(Node *root)
    {
           queue<pair<Node *,int>> q;
        map<int,vector<int>> mp;
        q.push({root,0});
        vector<int> res;
        while(!q.empty()){
            auto it=q.front();
                        q.pop();
            Node *curr=it.first;
            int hd=it.second;
            mp[hd].push_back(curr->data);
            if(curr->left)
            q.push({curr->left,hd-1});
            if(curr->right)
            q.push({curr->right,hd+1});
        }
      for(auto it : mp){
          vector<int> r=it.second;
       for(int i=0;i<r.size();i++)
       res.push_back(r[i]);
      }
      return res;
    }
*/