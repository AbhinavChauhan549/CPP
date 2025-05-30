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

//=====================================================================================================================================

// Insert Intervals
/*

You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.

Note that you don't need to modify intervals in-place. You can make a new array and return it.



Example 1:

Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]
Example 2:

Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
Output: [[1,2],[3,10],[12,16]]
Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
 vector<vector<int>>res;
 int i=0 ;
 int n = intervals.size();
 while(i<n && intervals[i][1] < newInterval[0]){
     res.push_back(intervals[i]);
     i++;
 }

 while(i<n && intervals[i][0] <= newInterval[1]){
     newInterval[0]=min(newInterval[0],intervals[i][0]);
     newInterval[1]=max(newInterval[1],intervals[i][1]);
     i++;
 }

 res.push_back(newInterval);
 while(i<n){
     res.push_back(intervals[i]);
     i++;
 }

 return res;
}
 */
//=======================================================================================================================================

// Minimum number of Platforms required in railway station
/*

Given the arrival and departure times of all trains reaching a particular railway station, determine the minimum number of platforms required so that no train is kept waiting. Consider all trains arrive and depart on the same day.



In any particular instance, the same platform cannot be used for both the departure of one train and the arrival of another train, necessitating the use of different platforms in such cases.


Examples:
Input : Arrival = [0900, 0940, 0950, 1100, 1500, 1800] , Departure = [0910, 1200, 1120, 1130, 1900, 2000]



Output : 3



Explanation : The first , second , fifth number train can use the platform 1.

The third and sixth train can use the platform 2.

The fourth train will use platform 3.

So total we need 3 different platforms for the railway station so that no train is kept waiting.

Input : Arrival = [0900, 1100, 1235] , Departure = [1000, 1200, 1240]



Output : 1



Explanation : All the three trains can use the platform 1.

So we required only 1 platform.
public:
int findPlatform(vector<int>& Arrival, vector<int>& Departure){
    //your code goes here
    sort(Arrival.begin(),Arrival.end());
    sort(Departure.begin(),Departure.end());
    int i=0 , j=0 , count=0 , maxcount=0;

    int n = Arrival.size();
    while(i<n){
        if(Arrival[i] <= Departure[j]){
            count++;
            i++;
        }

        else{
            count--;
            j++;
        }
        maxcount=max(maxcount,count);
    }
    return maxcount;
}
    */
//========================================================================================================================================

// Valid Parenthesis String

/*
Given a string s containing only three types of characters: '(', ')' and '*', return true if s is valid.

The following rules define a valid string:

Any left parenthesis '(' must have a corresponding right parenthesis ')'.
Any right parenthesis ')' must have a corresponding left parenthesis '('.
Left parenthesis '(' must go before the corresponding right parenthesis ')'.
'*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".


Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "(*)"
Output: true
Example 3:

Input: s = "(*))"
Output: true

bool checkValidString(string s) {
    int min =0 , max=0 ;
    int n = s.length();
    for(int i=0 ; i<n ; i++ ){
        if(s[i]=='('){
            min++;
            max++;
        }
        else if(s[i]==')'){
            min--;
            max--;
        }
        else{
            min--;
            max++;

        }

        if(min<0){
                min = 0;
            }
            if(max<0){
                return false;
            }
    }
    return (min==0);
}

*/

//=======================================================================================================================================

// Fractional knapsack problem

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to store item details
struct Item {
    int value;
    int weight;

    // Constructor
    Item(int v, int w) : value(v), weight(w) {}
};

// Comparator to sort items by decreasing value/weight ratio
bool compare(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

// Function to return maximum value that can be put in knapsack
double fractionalKnapsack(int W, vector<Item> items) {
    // Sort items by value/weight ratio
    sort(items.begin(), items.end(), compare);

    double maxValue = 0.0;  // Result

    for (auto item : items) {
        if (W == 0) break;

        // If the whole item can be taken
        if (item.weight <= W) {
            maxValue += item.value;
            W -= item.weight;
        } else {
            // Take the fractional part
            maxValue += item.value * ((double)W / item.weight);
            break;
        }
    }

    return maxValue;
}

int main() {
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter knapsack capacity: ";
    cin >> W;

    vector<Item> items;

    cout << "Enter value and weight for each item:\n";
    for (int i = 0; i < n; i++) {
        int v, w;
        cin >> v >> w;
        items.push_back(Item(v, w));
    }

    double result = fractionalKnapsack(W, items);
    cout << "Maximum value in knapsack = " << result << endl;

    return 0;
}
*/

//===========================================================================================================================================

// Candy

/*

There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute the candies to the children.



Example 1:

Input: ratings = [1,0,2]
Output: 5
Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
Example 2:

Input: ratings = [1,2,2]
Output: 4
Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
The third child gets 1 candy because it satisfies the above two conditions.
int candy(vector<int>& ratings) {
    int n = ratings.size();
    int sum =1 ;
    int i =1 ;

    while(i<n){
        if(ratings[i] == ratings[i-1]){
            sum++;
            i++;
            continue;
        }

        int peak = 1;

        while(i<n && ratings[i]>ratings[i-1]){
            peak++;
            sum+= peak;
            i++;
        }

        int down =1 ;

        while(i<n && ratings[i] < ratings[i-1]){
            sum+= down;
            i++;
            down++;
        }

        if(down > peak){
            sum += down-peak;
        }
    }

    return sum;
}
    */