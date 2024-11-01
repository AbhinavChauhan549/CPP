// Interview Bit
/*

Given an array of integers A and an integer B.

Find the total number of subarrays having bitwise XOR of all elements equals to B.


Example Input
Input 1:

 A = [4, 2, 2, 6, 4]
 B = 6
Input 2:

 A = [5, 6, 7, 8, 9]
 B = 5


Example Output
Output 1:

 4
Output 2:

 2


Example Explanation
Explanation 1:

 The subarrays having XOR of their elements as 6 are:
 [4, 2], [4, 2, 2, 6, 4], [2, 2, 6], [6]
Explanation 2:

 The subarrays having XOR of their elements as 5 are [5] and [5, 6, 7, 8, 9]


*/
/*
solve(vector<int> &A, int B) {
int ans=0, count=0;
unordered_map<int,int>mp;
for(int i=0;i<A.size();i++){
ans^=A[i];
if(ans==B) count++;
if(mp.find(ans^B)!=mp.end()){
count+=mp[ans^B];
}
mp[ans]++;
}
return count;
}
*/