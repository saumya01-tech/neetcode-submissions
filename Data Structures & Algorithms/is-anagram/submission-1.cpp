class Solution {
public:
    bool isAnagram(string s, string t) {
        // the brute force approach 
        // sort the two and check if they are equal

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
