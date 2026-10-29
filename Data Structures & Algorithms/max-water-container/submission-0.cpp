class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n-1;
        int maxArea = 0;

        while(left<right){
            int currentArea = (right-left) * min(heights[left],heights[right]);
            maxArea = max(maxArea, currentArea);
            // move the pointers
            if(heights[left]<heights[right]){
                left++;
            } else {
                right--;
            }
        }
        return maxArea;
    }
};
