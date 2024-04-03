#include<iostream>
#include<vector>
using namespace std;


void solve (vector<int> nums , vector<int> output , int index , vector<vector<int>>&ans){


        // Base Case 
        if(index>=nums.size()){
            ans.push_back(output);
            return ;
        }

        // Execlude 

        solve (nums,output,index+1,ans);

        // Include 
        int element = nums[index];
        output.push_back(element);
        solve (nums , output , index+1 , ans);

        
    }

    // vector<vector<int>> 
    void subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0 ;
        solve(nums,output,index,ans);
        // for(int it : ans){
        //     cout << ans[it];
        // }
    }
int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    subsets(a);
     return 0;
}