// Assign cookies

/*
Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.

int findContentChildren(vector<int>& g, vector<int>& s) {
  int n = g.size(), m= s.size();

  int l=0 , r=0 ;
  sort(g.begin(),g.end());
  sort(s.begin(),s.end());

  while(l<m && r<n){
      if(g[r] <= s[l]){
          r++;
      }
      l++;
  }
  return r;
}
  */

//==========================================================================================================================================

// Shortest Job First

/*
long long solve(vector<int>& bt) {
  sort(bt.begin(),bt.end());

   int t=0 , wttime=0;
  for(int i =0 ; i<bt.size() ;i++){
   wttime +=t;
   t += bt[i];
  }

  return (wttime/bt.size());
}
  */

//==========================================================================================================================================

// Lemonade Change

/*

At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.

Note that you do not have any change in hand at first.

Given an integer array bills where bills[i] is the bill the ith customer pays, return true if you can provide every customer with the correct change, or false otherwise.
class Solution {
  public:
      bool lemonadeChange(vector<int>& bills) {
          int five_dollars = 0, ten_dollars = 0;

          for (int x : bills) {
              if (x == 5) {
                  five_dollars++;
              } else if (x == 10) {
                  if (five_dollars > 0) {
                      five_dollars--;
                      ten_dollars++;
                  } else {
                      return false;
                  }
              } else {
                  if (five_dollars > 0 && ten_dollars > 0) {
                      five_dollars--;
                      ten_dollars--;
                  } else if (five_dollars > 2) {
                      five_dollars -= 3;
                  } else {
                      return false;
                  }
              }
          }

          return true;
      }
  };

  */
//==============================================================================================================================================

// JUmp Game : You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
// Return true if you can reach the last index, or false otherwise.

/*bool canJump(vector<int>& nums) {

    int  n= nums.size();

    int maxIndexThatCanBeReachedFromThatElement =0 ;

    for( int i =0 ; i<n ; i++){

        if(i > maxIndexThatCanBeReachedFromThatElement){
            return false;
        }

        maxIndexThatCanBeReachedFromThatElement= max(maxIndexThatCanBeReachedFromThatElement, i+nums[i]);
    }

    return true;
}

*/
//============================================================================================================================================

// Jump Game II

/*
You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].

Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at nums[i], you can jump to any nums[i + j] where:

0 <= j <= nums[i] and
i + j < n
Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].



Example 1:

Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
int jump(vector<int>& nums) {
    int n = nums.size();
    int jumps = 0;

    int l =0 , r=0 ;

    while(r<n-1){
        int farthest =0 ;

        for(int i = l ; i <= r ; i++){
            farthest = max(farthest, i+nums[i]);
        }
        l=r+1;
        r=farthest;
        jumps++;
    }
    return jumps;
}
    */
//==========================================================================================================================================
