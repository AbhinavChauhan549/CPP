// Coding Ninjas Code Studio : Delete Middle Element from Stack

/*

#include <bits/stdc++.h>

void solve (stack<int>&inputStack,int count, int N){

   // base case

   if(count == N/2){
      inputStack.pop();
      return;
   }

   int ans = inputStack.top();

   inputStack.pop();
   // Recursive Call
   solve(inputStack, count+1, N);
   // After pop

   inputStack.push(ans);

}
void deleteMiddle(stack<int>&inputStack, int N){


   int count =0;

    solve (inputStack , count , N);

}
*/