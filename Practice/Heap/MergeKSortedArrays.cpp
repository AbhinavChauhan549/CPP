// coding ninjas

/*

#include <bits/stdc++.h>
#include <queue>
class node{

    public:

    int data;
    int i;
    int j;

    node(int data , int row ,int col){
        this->data=data;
        this->i=row;
        this->j=col;
    }
};
class compare{
    public:

    bool operator()(node* a , node* b){
        return a->data > b->data;
    }
};
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<node*,vector<node*>,compare> pq;

    // step 1 : saare arrays ke first k elements insert karne hai

    for(int i =0 ; i< k ; i++){
        node* temp = new node(kArrays[i][0], i, 0);
        pq.push(temp);
    }

    vector<int>ans;

    // step 2

    while(pq.size() > 0 ){
        node * temp= pq.top();
        ans.push_back(temp->data);

        pq.pop();

        int i = temp->i;

        int j= temp->j;

        if(j+1 < kArrays[i].size()){
            node* next = new node(kArrays[i][j+1],i,j+1);
            pq.push(next);
        }
    }

    return ans;
}
*/