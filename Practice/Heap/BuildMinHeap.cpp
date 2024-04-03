// coding ninjas

/*
#include <bits/stdc++.h>



void heapify(vector<int>&arr, int n, int i)
{
  int smallestelement = i;
  int leftchild = 2 * i+1;
  int rightchild = 2 * i +2;

  if (leftchild < n && arr[leftchild] < arr[smallestelement])
  {
    smallestelement = leftchild;
  }
  if (rightchild < n && arr[rightchild] < arr[smallestelement])
  {
    smallestelement = rightchild;
  }

  if (smallestelement != i)
  {
    swap(arr[smallestelement], arr[i]);
    heapify(arr, n, smallestelement);
  }
}


vector<int> buildMinHeap(vector<int> &arr)
{
    int n=arr.size();
for (int i = n /2-1; i >=0; i--)
  {
    heapify(arr, n, i);
  }
  return arr;
}
 */