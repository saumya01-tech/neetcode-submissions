class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        // using bucket sort
        // bucket[frequency]= elements
        // bucket[i] contains numbers appearing i times
        vector<vector<int>> bucket(nums.size()+1);
        for(auto k:mp){
            bucket[k.second].push_back(k.first);
        }
        vector<int> result;
        // Scan backwards from highest frequency bucket
        for (int i = nums.size(); i >= 1 && result.size() < k; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);
            }
        }
        return result;
    }
};
