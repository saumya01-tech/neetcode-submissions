class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (const string& s : strs) {
            encoded += to_string(s.length()) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        int n = s.length();

        while (i < n) {
            // Find the delimiter '#' separating length and content
            int delim_pos = s.find('#', i);
            
            // Extract the length
            int len = stoi(s.substr(i, delim_pos - i));
            
            // Extract the substring of that length
            string str = s.substr(delim_pos + 1, len);
            decoded.push_back(str);

            // Advance pointer past length + '#' + string content
            i = delim_pos + 1 + len;
        }

        return decoded;
    }
};
