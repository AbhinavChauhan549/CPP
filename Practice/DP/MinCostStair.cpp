// ================================== Top Down Approach ==================================

/*
    int solve (vector<int>&cost , int n, vector<int>&dp){
        //base case
        if(n==0){
            return cost[0];
        }
        if(n==1){
            return cost[1];
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        dp[n] = cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));

        return dp[n] ;
    }
    int minCostClimbingStairs(vector<int>& cost) {

        // calculate the number of stairs
        int n = cost.size();

        // initialize a dp array of size n+1 with values -1
        vector<int> dp(n+1,-1);

        int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));

        return ans;
    }

    //==================== Bottom up approach ==================================================

int solve2(vector<int>&cost, int n){
        // initialize a 1D dp array
        vector<int>dp(n+1);
        // Base Case
        dp[0]=cost[0];
        dp[1]=cost[1];

        // rest of the cases can be solved using the for loop
        for(int i=2; i<n ;i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }

        return min(dp[n-1],dp[n-2]);
    }
    int minCostClimbingStairs(vector<int>& cost) {

        // // calculate the number of stairs
        // int n = cost.size();

        // // initialize a dp array of size n+1 with values -1
        // vector<int> dp(n+1,-1);

        // int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));

        // return ans;

        // for bottom up approach
        int n = cost.size();
        return solve2(cost,n);
    }

    //===========================Space Optimization ============================================


     int solve2(vector<int>&cost, int n){

        // Base Case
        int prev1=cost[1];
        int prev2=cost[0];

        // rest of the cases can be solved using the for loop
        for(int i=2; i<n ;i++){
            int curr=cost[i]+min(prev1,prev2);
            prev2=prev1;
            prev1=curr;
        }

        return min(prev1,prev2);
    }
    int minCostClimbingStairs(vector<int>& cost) {

        // // calculate the number of stairs
        // int n = cost.size();

        // // initialize a dp array of size n+1 with values -1
        // vector<int> dp(n+1,-1);

        // int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));

        // return ans;

        // for bottom up approach
        int n = cost.size();
        return solve2(cost,n);
    }
    */