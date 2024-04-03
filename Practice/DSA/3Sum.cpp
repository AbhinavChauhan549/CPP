/*
 vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int target=0;
        set<vector<int>> a;
        vector<vector<int>>ans;
        for(int i=0; i<nums.size(); i++){
            int j=i+1;
            int k=nums.size()-1;

            while(j<k){
                if(nums[i]+nums[j]+nums[k]==target){
                    a.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k] < target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }

        for(auto value: a){
            ans.push_back(value);
        }

        return ans;
    }
*/