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

// Job sequencing problem

/*
Given an 2D array Jobs of size Nx3, where Jobs[i][0] represents JobID , Jobs[i][1] represents Deadline , Jobs[i][2] represents Profit associated with that job. Each Job takes 1 unit of time to complete and only one job can be scheduled at a time.



The profit associated with a job is earned only if it is completed by its deadline. Find the number of jobs and maximum profit.


Examples:
Input : Jobs = [ [1, 4, 20] , [2, 1, 10] , [3, 1, 40] , [4, 1, 30] ]

Output : 2 60

Explanation : Job with JobID 3 can be performed at time t=1 giving a profit of 40.

Job with JobID 1 can be performed at time t=2 giving a profit of 20.

No more jobs can be scheduled, So total Profit = 40 + 20 => 60.

Total number of jobs completed are two, JobID 1, JobID 3.

So answer is 2 60.
vector<int> JobScheduling(vector<vector<int>>& Jobs) {
    // Sort the jobs based on profit in descending order
     sort(Jobs.begin(), Jobs.end(), [](const vector<int>& a, const vector<int>& b) {
         return a[2] > b[2];
     });

     // Find the maximum deadline
     int maxDeadline = 0;
     for (auto& job : Jobs) {
         maxDeadline = max(maxDeadline, job[1]);
     }

     // Create an array to keep track of used time slots
     vector<bool> slots(maxDeadline + 1, false); // 1-indexed
     int countJobs = 0, totalProfit = 0;

     // Try to schedule each job
     for (auto& job : Jobs) {
         for (int t = job[1]; t > 0; --t) {
             if (!slots[t]) {
                 slots[t] = true;  // Mark this slot as filled
                 countJobs++;
                 totalProfit += job[2];
                 break;
             }
         }
     }

     return {countJobs, totalProfit};
 }

 */

//===============================================================================================================================================

// N Meetings in one Room

/*
Given one meeting room and N meetings represented by two arrays, start and end, where start[i] represents the start time of the ith meeting and end[i] represents the end time of the ith meeting, determine the maximum number of meetings that can be accommodated in the meeting room if only one meeting can be held at a time.


Examples:
Input : Start = [1, 3, 0, 5, 8, 5] , End = [2, 4, 6, 7, 9, 9]

Output : 4

Explanation : The meetings that can be accommodated in meeting room are (1,2) , (3,4) , (5,7) , (8,9).

Input : Start = [10, 12, 20] , End = [20, 25, 30]

Output : 1

Explanation : Given the start and end time, only one meeting can be held in meeting room.
class Solution{
    public:
    int maxMeetings(vector<int>& start, vector<int>& end){
        //your code goes here

         int n = start.size();

        // Step 1: Create pairs of (start, end)
        vector<pair<int, int>> meetings;
        for (int i = 0; i < n; i++) {
            meetings.push_back({start[i], end[i]});
        }

        // Step 2: Sort by end time
        sort(meetings.begin(), meetings.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });

        // Step 3: Select meetings
        int count = 1; // first meeting is always selected
        int lastEnd = meetings[0].second;

        for (int i = 1; i < n; i++) {
            if (meetings[i].first > lastEnd) {
                count++;
                lastEnd = meetings[i].second;
            }
        }

        return count;
    }
};
*/

//=============================================================================================================================================

// Non Overlapping Intervals

/*
Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

Note that intervals which only touch at a point are non-overlapping. For example, [1, 2] and [2, 3] are non-overlapping.



Example 1:

Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
Output: 1
Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping.
Example 2:

Input: intervals = [[1,2],[1,2],[1,2]]
Output: 2
Explanation: You need to remove two [1,2] to make the rest of the intervals non-overlapping.
Example 3:

Input: intervals = [[1,2],[2,3]]
Output: 0
Explanation: You don't need to remove any of the intervals since they're already non-overlapping.
int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
       return a[1] < b[1];
   });
   int end = intervals[0][1];
   int count = intervals.size() - 1;
   for (int i = 1; i < intervals.size(); i++) {
       if (intervals[i][0] >= end) {
           end = intervals[i][1];
           count--;
       }
   }
   return count;
}
   */