#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

vector <int> result (vector<int> ans ){
	int s= 0 ;
	int e = ans.size()-1;

	while(s<=e){
		swap(ans[s++],ans[e--]);
	}
	return ans;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.

	int carry = 0 ;
 vector<int> ans ;
	int i = n-1;
	int j= m-1 ;
	int sum = 0 ;

	while(i>=0 && j>=0){
		sum = a[i]+b[j]+carry; 
		carry = sum/10;
		sum= sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}
	while(i>=0){
		sum = a[i]+carry; 
		carry = sum/10;
		sum= sum%10;
		ans.push_back(sum);
		i--;
	}
	while(j>=0){
		sum = b[j]+carry; 
		carry = sum/10;
		sum= sum%10;
		ans.push_back(sum);
		j--;
	}
	while(carry!=0){
		sum =carry; 
		carry = sum/10;
		sum= sum%10;
		ans.push_back(sum);
	
	}
	result(ans);
	return ans ;
}


int main(){
    vector<int> v ;
    v.push_back(2);
    v.push_back(8);
    v.push_back(7);

     vector<int> u ;
    v.push_back(2);
    v.push_back(8);
    v.push_back(7);

    vector<int> res =findArraySum(v, 3, u, 3);

    for(int i = 0 ; i<res.size() ;i++){
        cout<<res[i]<<" "<<endl;
    }

     return 0;
}