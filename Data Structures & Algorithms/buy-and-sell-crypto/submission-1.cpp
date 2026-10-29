class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int left = 0;
        int right = 1;
        int maxP = 0;
        
        while (right<n){
            if(prices[right]>prices[left]){
                maxP = max(maxP, prices[right]-prices[left]);
            } else {
                left=right;
            }
            right++;
        }
        return maxP;
    }
};
