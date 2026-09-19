class Solution {
public:
    bool isAnagram(string s, string t) {
        // both strings should have same length
        if(s.size()!= t.size()){
            return false;
        }
        int n=s.size();
        unordered_map<char,int> map_s, map_t;

        for(int i=0;i<n;i++){
            map_s[s[i]]++;
            map_t[t[i]]++;
        }
        
        if(map_s==map_t){
            return true;
        }
        return false;
    }
};
