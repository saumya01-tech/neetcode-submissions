class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        //sort the array
        sort(nums.begin(),nums.end());

        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            // since sorted, optimization needed to not evaluate for the same number we did for again

            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            //apply 2 pointer
            int start = i+1;
            int end = n-1;
            while(start<end){
                int sum = nums[start]+nums[end]+nums[i];
                if(sum==0){
                    ans.push_back({nums[i],nums[start],nums[end]});
                    start++;
                    end--;
                    // need to optimise for the inner array also

                    while(start<end && nums[start]==nums[start-1]){
                        start++;
                    }
                }
                else if(sum>0){
                    end--;
                    continue;
                }
                else{
                    start++;
                    continue;
                }
            }
        }
        return ans;
    }
};