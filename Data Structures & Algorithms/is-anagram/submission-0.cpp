class Solution {
public:
    bool isAnagram(string s, string t) {
        // both strings should have same length
        int n=s.size();
        int m=t.size();
        if(s.size()!= t.size()){
            return false;
        }
        unordered_map<char,int> map_s, map_t;

        for(int i=0;i<n;i++){
            map_s[s[i]]++;
            map_t[t[i]]++;
        }
        // now we should check if the two hashtables are same. 
        if(map_s==map_t){
            return true;
        }
        return false;
    }
};
