 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    
     return 0;
 }
 
 // Ek array given hoga or uski index number day ko represent karega or index value stock ke price ko represent karega
 
 int maxProfit(vector<int>& prices) {
       int min_price = prices[0];
        int maxprof = 0;

        for(int i=1;i<prices.size();i++){
            maxprof = max(maxprof,prices[i]-min_price);
            min_price = min(prices[i],min_price);
        }

        return maxprof;
    }