
// Coding Ninjas

/*
#include <bits/stdc++.h>

void sortedInsert(stack<int> &stack , int num){
  // base case

  if(stack.empty() || (!stack.empty() && stack.top()< num)){
    stack.push(num);
    return;
  }


  int ans = stack.top();
  stack.pop();

  sortedInsert(stack,num);

  stack.push(ans);
}
void sortStack(stack<int> &stack)
{
  if(stack.empty()){
    return;
  }
  int ans = stack.top();
  stack.pop();

  // Recursive Call
  sortStack(stack);

  sortedInsert(stack, ans);
}
*/