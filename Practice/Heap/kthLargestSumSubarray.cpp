// coding ninjas

/*
=============================Brute Force Approach===================

#include<algorithm>
int getKthLargest(vector<int> &arr, int k)
{
  vector<int> ans;

  for(int i =0 ;i<arr.size() ; i++){
    int sum = 0;
    for(int j = i ;j<arr.size() ; j++){
      sum += arr[j];
      ans.push_back(sum);
    }
  }

  sort(ans.begin(),ans.end());

  return ans[ans.size() - k];
}

===================================better approach==============================

using min heap

#include<algorithm>
#include<queue>
int getKthLargest(vector<int> &arr, int k)
{

  priority_queue<int , vector<int> , greater<int>> pq;

  int n = arr.size();

  for(int i =0 ; i< n ; i++){
    int sum = 0 ;
    for(int j =i  ; j < n ;j++){
      sum += arr[j];

      if(pq.size() < k ){
        pq.push(sum);
      }
      else{
        if(sum > pq.top()){
          pq.pop();
          pq.push(sum);
        }
      }
    }
  }

  return pq.top();
}
*/