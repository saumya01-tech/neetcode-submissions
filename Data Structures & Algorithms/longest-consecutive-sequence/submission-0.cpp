class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // sort the array
        // start a pointer with size-1, which increases when the next element is +1 number, if not, go to next number and keep the pointer as 1 only
        // there can be more sequences than 1, what to do with them
        unordered_set<int> st(nums.begin(),nums.end());
        int longest = 0;
        for(int num : st){
            if(st.find(num-1)==st.end()){
                //unique number, new seq
                int current = num;
                int count=1;
                while(st.find(current+1)!=st.end()){
                    current++;
                    count++;
                }
                longest = max(longest,count);
            }
        }
        return longest;
    }
};
