// This algorithm is used in question like largest sum Contigous array

// kadane's algorithm

/*
int maxSumSubArray( int a[]){
  int maxSum = INT_MIN ;
  int currSum =0 ;

  for(int i=0 ; i <a.length() ;i++){
    currSum +=currSum + a[i];

    if(currSum > maxSum){
      maxSum = currSum ;

    }
    if(currSum < 0 ){
      currSum =0;
    }

  }

  return maxSum;
}
*/