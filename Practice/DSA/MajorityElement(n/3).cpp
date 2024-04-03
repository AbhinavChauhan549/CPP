// Boyer Moore Majority Voting Method
/*
vector<int> majorityElement(vector<int>& nums) {
       // IN this problem the can be at most 2 majority elements because if any element appears n/3 +1 times then
       // the one third of array , ie (n/3 + 1 ) * 3 > size of array .
       int count1 = 0 ,count2 =0 ;
       int candidate1 =0 , candidate2=0 ;
// first pass for identifying both the candidate elements and their respective counts
       for (int i=0; i<nums.size() ; i++ ){

           if(count1==0 && nums[i]!=candidate2){
               count1=1;
               candidate1=nums[i];
           }
           else if (count2==0 && nums[i]!=candidate1){
               count2=1 ;
               candidate2=nums[i];
           }
           else if(candidate1==nums[i]){
               count1++;
           }
           else if(candidate2==nums[i]){
               count2++;
           }
           else{
               count1--;
               count2--;
           }
       }


       vector<int> ans;
       int threshold = nums.size()/3;
// second pass to verify count for both the candidate elements
       count1=0,count2=0;

       for(int i=0 ;i<nums.size(); i++){
           if(candidate1==nums[i]){
               count1++;
           }
           else if(candidate2==nums[i])
           {
               count2++;
           }

       }
       // checking the counts for both candidate elements with the threshold value

       if(count1>threshold){
           ans.push_back(candidate1);
       }
       if(count2>threshold){
           ans.push_back(candidate2);
       }

       return ans;
   }

   //=====================================Using hashmap==============================================================


    vector<int> majorityElement(vector<int>& nums) {
        // Create a frequency map to store the count of each element
        unordered_map<int, int> elementCountMap;

        // Iterate through the input array to count element occurrences
        for(int i = 0; i < nums.size(); i++) {
            elementCountMap[nums[i]]++;
        }

        vector<int> majorityElements;
        int threshold = nums.size() / 3;

        // Iterate through the frequency map to identify majority elements
        for(auto elementCountPair : elementCountMap) {
            int element = elementCountPair.first;
            int count = elementCountPair.second;

            // Check if the element count is greater than the threshold
            if(count > threshold) {
                majorityElements.push_back(element);
            }
        }

        return majorityElements;
    }
*/